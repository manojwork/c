#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int n,i;
    printf(" enter the size of an Array : ");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for( i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    return 0;
}