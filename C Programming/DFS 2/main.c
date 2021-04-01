
//Dhaka International University
//Nitish Biswas
//Batch : 51(1st shift)
//Roll : 05

#include<stdio.h>

int q[100],end,sp;

void DFS(int** edges,int i,int vertices,int* visited);

int main()
{
    int i,j,vertices;
    printf(" Enter number of vertice : ");
    scanf("%d",&vertices);
    printf("\n Enter adjacency matrix of the graph:\n");
    int **edges = (int **)malloc(vertices* sizeof(int*));
    for(i=0; i<vertices; i++)
    {
        edges[i]=(int*)malloc(vertices* sizeof(int));
        for(j=0; j<vertices; j++)
            scanf(" %d",&edges[i][j]);
    }
    int visited[vertices];
    for(int i=0; i<vertices; i++)
    {
        visited[i] = 0;
    }
    printf("\n Enter starting point : ");
    scanf(" %d",&sp);
    printf("\n");
    q[sp]=sp;
    scanf("%d",&end);
    DFS(edges,sp,vertices,visited);

}

void DFS(int **edges,int i,int vertices,int* visited)
{
    int j;
    visited[i]=1;
    for(j=0; j<vertices; j++){
        if(visited[j]==0 && edges[i][j]==1){
            q[j] = i;
            DFS(edges,j,vertices,visited);
        }
        if(i==end){
            goto print;
        }else{
            q[100]=0;
        }
    }
    print:
        printf("\n");
        for(i = end-1;i>sp;){
            printf("%d ",q[i]);
            i=q[i];
        }
}
