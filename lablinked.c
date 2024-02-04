#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next,*prev;
};
int main()
{   
    int n,i;
    printf("enter how many nodes you want : " );
    scanf("%d",&n);
    struct node *newnode,*head,*top;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=0;
    head=top=newnode;
    printf("enter the data of a head node : ");
    scanf("%d",&newnode->data);
    for(i=1;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    top->next=newnode;
    newnode->next=0;
    top=newnode;
    printf("enter the data of a  node : ");
    scanf("%d",&newnode->data);
    }

    top=head;
    struct node *p;
    while(top->next!=0)
    {
       
        p=top;
        top=top->next;
    }
    free(top);
     p->next=0;
   top=p;
   top=head;

   while(top->next!=0)
    {
       printf("%d ->",top->data);
        top=top->next;
    }
    return 0;
}