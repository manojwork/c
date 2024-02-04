#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,j,n,temp;
    printf("enter the size of array : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d ,",p[i]);
    }
    return 0;
}