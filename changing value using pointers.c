#include<stdio.h>
int main ()
{
    int a=4;
    int *c=&a;
    *c=44;
    printf("\n%d",c);
    printf("\n%d",*c);
    printf("\n%d",a);
    printf("\n%d",&a); 
    return 0;
    
}