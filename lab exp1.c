 #include<stdio.h>
void main ()
{
    int a[5],i,n,m,temp;
    printf("\n\t\venter the values of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
printf(" \n\v\t\aenter the element to search : ");
scanf("%d",&n);
 for(i=0;i<5;i++)
 {
    if(n==a[i])
    {
        printf(" \n\v\t\a%d is in INDEX : %d ",n,i);

    }
 }
 printf("\n\v\t\aenter the index to delete ");
 scanf("%d",&m);
 if(m<=4);
 {
    temp=a[m];
    for(i=0;i<=4;i++)
    {
        a[m]=a[m+1];

    }
    printf(" \n\t\v\a%d is the deleted value : ",temp);
 }

}