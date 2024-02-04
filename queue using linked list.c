#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}; 
struct node *top=0,*temp=0;
void enqueue(int ele)
{   
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    if(top==0&&temp==0)
    {
    newnode->next=top;
    top=temp=newnode;
    }
    else 
    {
        temp->next=newnode;
        temp=newnode;
        newnode->next=0;
    }
    
}
void dequeue()
{   struct node *p;
    if(top==0&&temp==0)
{
    printf("\nunderflow");
}
    else{
        p=top;
    top=top->next;
    printf("\n%d is poped",p->data);
    free(p);
    p=top;
}
}


void display()
{   struct node *p;
    p=top;
    if(top==0&&temp==0)
{
    printf("\nunderflow");
}
    else{
        while(p!=0)
        {
            printf("%d->",p->data);
            p=p->next;
        }  
        }
}
int main()
{
    int option,item;
    while(option!=4){
    printf("enter the option to do stack operation\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter the option :  ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: 
        printf("\nenter the element to push : ");
        scanf("%d",&item);
        enqueue(item) ;
         break;
        case 2: dequeue();
        break;
        case 3: display();
        break;
        case 4 :
        exit(0);
        default : printf("invalid input :( ");
        break;
    }
}
return 0;
}