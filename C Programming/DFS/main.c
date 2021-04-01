#include<stdio.h>

void DFS(int** arr, int n, int sv,int* visited){
    printf("%d\n",sv);
    visited[sv] = 1;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(arr[sv][i]==1){
            if(visited[i]){
                continue;
            }
            DFS(arr,n,i,visited);
        }
    }
}

int main(){
    int n,e;
    scanf("%d %d",&n,&e);
    int **arr = (int **)malloc(n* sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=(int*)malloc(n* sizeof(int));
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }
    for(int i =0;i<e;i++){
        int f,s;
        scanf("%d %d",&f,&s);
        arr[f][s] = 1;
        arr[s][f] = 1;
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }
    DFS(arr,n,0,visited);

}
