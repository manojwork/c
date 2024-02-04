#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter how many nodes we want \n");
    scanf("%d",&n);
    struct node
    {
     int data;
     struct node *next;
    };
    struct node *head,*top,*newnode;
    head=0;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the %d node data : ",i);
        scanf("%d",&newnode->data);
        newnode->next=0;
    }
    if(head==0)
    {
        head=top=newnode;
    }
    else
    {
     top->next=newnode;
     top=newnode;
    }
    struct node *prev;
    top=head;
    while(top->next!=0)
    {
        prev=top;
        top=top->next;
    }
     free(top);
    prev->next=0;
      while(top!=0)
    {
        printf("%d->",top->data);
        top=top->next;
    }
    return 0;
}