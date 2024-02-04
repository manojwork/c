#include<stdio.h>
#define MAXSIZE 100
#define INF 404
int A[MAXSIZE][MAXSIZE],n;
void floyd(){
int k,j,i;
for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((A[i][k]+A[k][j])<A[i][j]){
                A[i][j]=(A[i][k]+A[k][j]);
            }
        }
    }
}
}
int main(){
printf(" floyd's alogitham ");
int i,j;
printf(" enter the number of vertices : ");
scanf("%d",&n);
printf(" enter the matrix (%d for infinite ): ",INF);
for( i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
floyd();
for( i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d  ",A[i][j]);
    }
    printf("\n");
}
    return 0;
}