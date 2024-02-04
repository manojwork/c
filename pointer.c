#include<stdio.h>
int main()
{
    int a,b,*p1,*p2;
    printf("\n\t\tenter the a value :");
    scanf("%d",&a);
    printf("\n\n\t\tenter the b value :");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("\n\t\t the p1 value :%d",*p1);
    printf("\n\n\t\t the p2 value :%d",*p2);
     printf("\n\t\taddress the a value :%d",&a);
    printf("\n\n\t\taddress the b value :%d",&b);
      printf("\n\t\treferance the p1 value :%d",p1);
    printf("\n\n\t\treferance the p2 value :%d",p2);
    return 0;
}

