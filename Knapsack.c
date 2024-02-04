#include<stdio.h>
void knapsack(int profit[],int weights[],int W,int n){
int i,w,j;
int M[n+1][W+1];
for(i=0;i<n+1;i++){
    for(w=0;w<W+1;w++){
        if(i==0||w==0){
            M[i][w]=0;
        }
        else if(weights[i-1]<=w){
            M[i][w]=(M[i-1][w]<(profit[i-1]+M[i-1][w-weights[i-1]]))?(profit[i-1]+M[i-1][w-weights[i-1]]):M[i-1][w];
        }
        else{
            M[i][w]=M[i-1][w];
        }
    }
}
printf(" \n table : \n");
    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
printf("\n maximum profit in %d weight capacity is %d",W,M[n][W]);
//int max=M[n][W];
}
int main(){
    int n;
    printf(" enter the number of items : ");
    scanf("%d",&n);
    int profit[n];
    int weights[n];
    int i,W;
    printf(" enter the weights : ");
    for(i=0;i<n;i++){
            scanf("%d",&weights[i]);
    }
    printf(" enter the profits of an items : ");
    for(i=0;i<n;i++){
            scanf("%d",&profit[i]);
    }
    printf(" enter the maxixum weight : ");
    scanf("%d",&W);
    knapsack(profit,weights,W,n);
    return 0;
}