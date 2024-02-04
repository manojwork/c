#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{ 
int *arr,m,N,i;
printf("enter the size of array : ");
scanf("%d",&m);
arr=(int*)malloc(m*sizeof(int));
printf("\nenter the elements in the sorted order\n");
for(i=0;i<m;i++)
{
    scanf("%d",&arr[i]);
}
 N =sizeof(arr)/sizeof(int);
int i;
int diff=arr[0]-0;
for(i=0;i<N;i++)
{
    if(arr[i]-i!=diff)
    {
        while(diff<arr[i]-i)
        {
          printf("%d ",diff+i);
          diff++;
        }
    }
}
    return 0;
}