#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createLists(int n) {
    struct node* newnode, * head, * temp;
    newnode = malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    head = temp = newnode;
    newnode->next = NULL;
    int i;
    for (i = 0; i <= n - 1; i++) {
        if (i==n-1){
        newnode = malloc(sizeof(struct node));
        newnode->data=10;
        temp->next = newnode;
        temp = temp->next;
        newnode->next = NULL;
        }
        else{
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        temp->next = newnode;
        temp = temp->next;
        newnode->next = NULL;
        }
    
    }
    return head;
}

void displayList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* AddingLists(struct node* L1, struct node* L2,int n1,int n2) {
    struct node* current = NULL, * AH = NULL, * temp1, * temp2, * flag;
    int carry = 0, digit1, digit2, total, data, i = 0,j=0,k=0;

    temp1 = L1;
    temp2 = L2;
     while (j<n1 || k<n2 || carry != 0){
        if (j<n1) {
            digit1 = temp1->data;
        }
        else {
             digit1 = 0;
        }

        if ( k<n2) {
            digit2 = temp2->data;
        }
        else {
            digit2 = 0;
        }

        total = digit1 + digit2 + carry;
        if (total >= 10) {
            carry = total / 10;
            data = total % 10;
        }
        else {
            data = total;
            carry = 0;
        }
        current = malloc(sizeof(struct node));
        if (i == 0) {
            current->data = data;
            current->next = NULL;
            AH = flag = current;
        }
        else {
            current->data = data;
            flag->next = current;
            current->next = NULL;
            flag = current;
        }
        i++;
        j++;
        k++;

        total = 0;
        data = 0;
        if (j<n1){
            temp1=temp1->next;
        }
        if(k<n2){
            temp2=temp2->next;
        }
    }
    return AH;
}

int main() {
    int n1,n2;
    struct node* l1, * l2, * A;
    printf("Enter the number of nodes you want in L1: ");
    scanf("%d", &n1);
    l1 = createLists(n1);
    printf("Enter the number of nodes you want in L2: ");
    scanf("%d", &n2);
    l2 = createLists(n2);
    A = AddingLists(l1, l2,n1,n2);
    printf("The added list is: \n");
    displayList(A);
    return 0;
}
