#include<stdio.h>
#define MAXSIZE 100
int A[MAXSIZE][MAXSIZE],n;
void warshalls(){
int k,j,i;
for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j]||(A[i][k]&&A[k][j])){
                  A[i][j]=1;
            }
        }
    }
}
}
int main(){
printf(" warshall's alogitham ");
int i,j;
printf(" enter the number of vertices : ");
scanf("%d",&n);
printf(" enter the matrix (1/0): ");
for( i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
warshalls();

for( i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d  ",A[i][j]);
    }
    printf("\n");
}
    return 0;
}