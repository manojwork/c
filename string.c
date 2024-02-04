#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char *p; 
    printf(" enter the size of an array"); 
    scanf("%d",&n);
    p=(char*)calloc(n,sizeof(char));
    gets(p);
    printf(" the string is \n %s",p);
    return 0;
}