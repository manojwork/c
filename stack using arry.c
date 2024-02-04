#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int ele)
{
    if(top==MAX-1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("%d element is pushed ",ele);
    }
}
void pop()
{ int a;
    if(top==-1)
    {
        printf("underflow");
    }
    else
{
 a=stack[top];
 top--;
 printf("%d element is poped ",a);
}
} 
void peek()
{ int a;
     if(top==-1)
    {
        printf("underflow");
    }
    else
{
 a=stack[top];
 printf("%d element is the peek ",a);
}
}
void display()
{ int a,i;
     if(top==-1)
    {
        printf("underflow");
    }
    else
{ for(i=MAX;i>=0;i--)
{
 a=stack[i];
 printf("%d \n ",a);
}
}
}
int main ()
{   int option,item;
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
    /*printf("\n************** \n1->to continue \n0-> to exit \nenter the option : ");
    scanf("%d",&choice);*/
}while(1);

}
