#include<stdlib.h>
#include<stdio.h>
struct node{
    int item;
    struct node *next,*prev;
};
struct node *head=0,*temp=0,*flag=0,*newnode=0;
void add(int item){
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->item=item;
   if(head==0){
    head=newnode;
    newnode->next=0;
    newnode->prev=0;
    temp=head;
   }
   else{
    temp->prev=newnode;
    newnode->next=temp;
    newnode->prev=0;
    temp=newnode;
    flag=temp;
   }
}
void Stack(){
    temp=flag;
    printf("\n");
    printf(" Stack (LIFO) : ");
    while(temp!=0){
        printf("%d->",temp->item);
        temp=temp->next;
    }
    printf("%d->",temp->item);
}
void Queue(){
    temp=head;
    printf("\n");
    printf(" Queue (FIFO) : ");
    while(temp!=flag){
       printf("%d->",temp->item);
        temp=temp->prev;
    }
    printf("%d->",temp->item);
    }
    void Sort(int n){
        flag=temp=head;
    int swap,i;
    for (i=0;i<n;i++){
        while(temp->prev!=0){
            if(flag->item<temp->item){
                swap=flag->item;
                flag->item=temp->item;
                temp->item=swap;
            }
            temp=temp->prev;
        }
        flag=flag->prev;
        temp=head;
    }
    temp=head;
    printf("\n");
    printf(" sorted linked list : ");
    while(temp->prev!=0){
        printf("%d->",temp->item);
        temp=temp->prev;
    }
    printf("%d->",temp->item);
    }
int main(){
    printf(" how many number of nodes you want : ");
    int n;
    scanf("%d",&n);
    int i,data;
    for(i=0;i<n;i++){
        printf(" enter the %d element : ",i);
        scanf("%d",&data);
        add(data);
    }
    Sort(n);
    Queue();
    Stack();
    return 0;
}