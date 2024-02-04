#include<stdio.h>
#define MAX 5 
int q[MAX];
int rear=-1,front=-1;
enqueue(int ele)
{
   if(rear==MAX+1)
    {
        printf("overflow");
    }
    else  if(rear==-1&&front==-1)
{
    front++;
    rear++;
    q[rear]=ele;
    printf("%d is inserted",ele);
}
else 
{
    rear++;
    q[rear]=ele;
      printf("%d is inserted",ele);
}
}
void dequeue()
{
if(rear==-1&&front==-1)
    {
        printf("underflow");
    }
    else  if(rear==front)
{  
    printf("%d is inserted",q[front]);
    front--;
    rear--;
  
}
else 
{
   printf("%d is deleted",q[front]);
   front++;
}
}
 void peek()
 {
    if(rear==-1&&front==-1)
    {
        printf("underflow");
    }
    else  if(rear==front)
{  
    printf("%d is front ",q[front]);
    
    
  
}
else 
{
   printf("%d is front",q[front]);
   
}
 }
 void display()
 { int i;
    if(rear==-1&&front==-1)
    {
        printf("underflow");
    }
    else  if(rear==front)
{  
    printf("%d  ",q[front]);
    
    
  
}
else 
{ for(i=front;i<rear+1;i++)
{
   printf("%d ",q[i]);
   
}
}
 }
int main()
 
{ int option,item,choice;
 do{
    printf("enter the option to do stack operation\n1.enqueue\n2.dequeue\n3.peek\n4.display\nenter the option :  ");
    scanf("%d",&option);
     switch(option)
    {
        case 1: 
        printf("\nenter the element to enqueue : ");
        scanf("%d",&item);
        enqueue(item) ;
         break;
        case 2: dequeue();
        break;
        case 3: peek();
         break;
        case 4: display();
        break;
        default : printf("invalid input :( ");
    }
    printf("\n0->to exit \n1->continue");
    scanf("%d",&choice);
}while(choice);
 return 0;
}