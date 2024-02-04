#include<stdio.h>
#include<stdlib.h>
 struct node
    {
     int data;
     struct node *next;
     struct node *prev;
    };
int main()
{
    int n,i;
    printf("enter how many nodes you want \n");
    scanf("%d",&n);
    struct node *head,*top,*newnode;

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the 1 node data head : ");
        scanf("%d",&newnode->data);
        head=top=newnode;
        newnode->next=0;
        newnode->prev=0;
    for(i=1;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the  %d node data : ",i+1);
        scanf("%d",&newnode->data);
        top->next=newnode;
        newnode->next=0;
        newnode->prev=top;
        top=newnode;
    }

  printf("display the node from front : ");
    top=head;
    
      while(top!=0)
    {
        printf("%d->",top->data);
        top=top->next;
    }
    top=head;
    struct node *p;
    while(top->next!=0)
    {
        p=top;
        top=top->next;
    }
    printf("\nnodes after reversing : ");
      while(top!=0)
    {
        printf(" %d->",top->data);
        top=top->prev;
    }
    return 0;
}
