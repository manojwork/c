#include<stdio.h>
#include<stdlib.h>
int sum(int *p,int size)
{
    int i,temp;
    for(i=0;i<size;i++)
    {
        temp=temp+p[i];
    }
    return temp;
}

int main()
{
    int n,i,*p;
    printf(" enter the size of an array\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
 int result=sum(p,n);
 printf("sum = %d ",result);
 return 0;
}