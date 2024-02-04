#include<stdio.h>
#include<stdlib.h>
struct node{
 int item;
 struct node *next;
};
struct node *head,*temp,*flag;
int main(){
    int n,i;
    printf(" enter the number of nodes you want : ");
    scanf("%d",&n);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    printf(" enter the head node item : ");
    scanf("%d",&newnode->item);
    head=temp=newnode;
    for(i=1;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf(" enter the %d node item : ",i);
        scanf("%d",&newnode->item);
        temp->next=newnode;
        newnode->next=0;
        temp=newnode;
    }
    printf(" unsorted linked list : ");
    temp=head;
    while(temp->next!=0){
        printf("%d->",temp->item);
        temp=temp->next;
    }
    printf("%d->",temp->item);
    flag=temp=head;
    int swap;
    for (i=0;i<n;i++){
        while(temp->next!=0){
            if(flag->item<temp->item){
                swap=flag->item;
                flag->item=temp->item;
                temp->item=swap;
            }
            temp=temp->next;
        }
        flag=flag->next;
        temp=head;
    }
    temp=head;
    printf("\n");
    printf(" sorted linked list : ");
    while(temp->next!=0){
        printf("%d->",temp->item);
        temp=temp->next;
    }
    printf("%d->",temp->item);
    return 0;
}