#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};

struct node* createLists(int n) {
    struct node* newnode, * head, * temp;
    newnode = malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    head = temp = newnode;
    newnode->next = NULL;
    int i;
    for (i = 0; i < n - 1; i++) {
        newnode = malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        temp->next = newnode;
        temp = temp->next;
        newnode->next = 0;
    }
    return head;
}

void main(){
      int n;
    struct node* l1, * l2, * A;
    printf("Enter the number of nodes you want in L1: ");
    scanf("%d", &n);
    l1 = createLists(n);
    printf("Enter the number of nodes you want in L2: ");
    scanf("%d", &n);
    l2 = createLists(n);

    while (1){
        printf(" %d  $  %d \n",l1->data,l2->data);
        l1=l1->next;
        l2=l2->next;
    }

}