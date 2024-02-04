#include<stdio.h>
#define MAX 90
int A[MAX];
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void printArray(int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
}
void QucikSort(int l,int h){
    if (l<h){
      int j=partion(l,h);
      QucikSort(l,j-1);
      QucikSort(j+1,h);
    }
}
int partion(int l,int h){
    int i=l;
    int j=h;
    int pivot=A[l];
    while(i<j){
    do{
        i++;
    }while(A[i]<=pivot);
    do {
        j--;
    }while(A[j]>pivot);
    swap(A[i],A[j]);
    }
    swap(A[l],A[j]);
    return j;
}
int main(){
    int n,l=0,h,i;
    printf(" enter the size of an array : ");
    scanf(" %d",&n);
    h=n-1;
    printf(" enter the values of an array : ");
    for (i=0;i<n;i++){
        scanf(" %d",&A[i]);
    }
    printf(" Before Sorting : \n");
    printArray(n);
    QucikSort(l,h);
    printf(" After Sorting : \n");
    printArray(n);
    return 0;
}