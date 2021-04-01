
//Dhaka International University
//Nitish Biswas
//Batch: 51(1st Shift)
//Roll: 05

//Prims Algorithm

#include<stdio.h>
#include<conio.h>

int a,b,u,v,n,i,j,ne=1;
int visited[50]= {0},min,mincost=0,cost[50][50];

void main()
{
    printf("\nEnter the number of Computers:");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix of length of all the connected computers:\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }

    printf("\nList of All the connected wire and length of all the Computers wire : \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(cost[i][j]<999){
                printf("\n\n Connected wire %d :( %d no PC to %d no PC ) length: %d ",ne,i,j,cost[i][j]);
                ne++;
            }
        }
    }
    ne=1;
    visited[1]=1;

    printf("\n\n\nList of minimum connected wire and length of all computers wire: ");
    printf("\n");

    while(ne < n)
    {
        for(i=1,min=999; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]< min)
                {
                    if(visited[i]!=0)

                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }
        if(visited[u]==0 || visited[v]==0)
        {
            printf("\n\n Connected wire %d:( %d no PC to %d no PC ) length: %d",ne++,a,b,min);
            mincost+=min;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n\n Minimun total length of wire needed = %d",mincost);
    getch();
}


