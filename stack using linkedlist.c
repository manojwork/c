#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}; 
struct node *top=0,*temp;
void push(int ele)
{   
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    newnode->next=top;
    top=temp=newnode;
}
void pop()
{   if(top==0)
{
    printf("\nunderflow");
}
    else{
    top=top->next;
    printf("%d is poped",temp->data);
    free(temp);
    temp=top;
}
}
void peek()
{   if(top==0)
{
    printf("\nunderflow");
}
    else{
    
    printf("%d is poped",top->data);
   
}

}
void display()
{   temp=top;
    if(top==0)
{
    printf("\nunderflow");
}
    else{
        while(temp!=0)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
}
}
int main()
{
    int option,choice,item;
    do{
    printf("enter the option to do stack operation\n1.push\n2.pop\n3.peek\n4.display\nenter the option :  ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: 
        printf("\nenter the element to push : ");
        scanf("%d",&item);
        push(item) ;
         break;
        case 2: pop();
        break;
        case 3: peek();
         break;
        case 4: display();
        break;
        default : printf("invalid input :( ");
    }
    printf("\n************** \n1->to continue \n0-> to exit \nenter the option : ");
    scanf("%d",&choice);
}while(1);
return 0;
}