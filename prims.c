#include<stdio.h>
#define INT_MAX 9999
int v;
int setMinVertex(int values[],int setMst[]){
    int minimum=INT_MAX;
    int vertex,i;
    for(i=0;i<v;i++){
        if(values[i]<minimum&&setMst[i]==0){
            vertex=i;
            minimum=values[i];
        }
    }
    return vertex;
}
void findMST(int graph[v][v]){
    int parent[v];
    int values[v];
    int setMst[v];
    int i,j;
    for(i=0;i<v;i++){
        setMst[i]=0;
        values[i]=INT_MAX;
    }
    parent[0]=-1;
    values[0]=0;
    for(i=0;i<v-1;i++){
        int u =setMinVertex(values,setMst);
        setMst[u]=1;
        for(j=0;j<v;j++){
            if(graph[u][j]!=0 && graph[u][j]<values[j] &&setMst[j]==0){
                values[j]=graph[u][j];
                parent[j]=u;
            }
        }
    }
    printf(" vertex : ");
    for (i=0;i<v;i++){
        printf(" %d ",i);
    }
    printf("\n parent : ");
    for (i=0;i<v;i++){
        printf(" %d ",parent[i]);
    }
}
int main(){
printf(" enter the number of vertices : ");
scanf("%d",&v);
int graph[v][v],i,j;
printf(" enter the adjacent matrix : ");
for( i=0;i<v;i++){
    for(j=0;j<v;j++){
        scanf("%d",&graph[i][j]);
    }
}
findMST(graph);
}