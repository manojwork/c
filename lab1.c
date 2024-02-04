#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,*p,m,i,sum=0;
 printf("enter the size of the array : ");
 scanf("%d",&n);
 printf(" array created ");
p=(int*)malloc(n*sizeof(int));

for( i=0;i<n;i++)
{
    scanf("%d",&p[i]);
    sum=sum+p[i];
}

printf("enter the index position  : ");
scanf("%d",&m);
printf("%d is the sum except index position ",sum-p[m]);
    return 0;
}