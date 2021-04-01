
//Dhaka International University
//Nitish Biswas
//Batch: 51(1st Shift)
//Roll: 05

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

#define initial 1
#define waiting 2
#define visited 3

int n;
int adj[MAX][MAX];
int state[MAX];
void create_graph();
void BF_Traversal();
void BFS(int v,int end);
int temp,j;
int q[MAX]={0},r[MAX];

int queue[MAX], front = -1,rear = -1;
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();

int main()
{
    create_graph();
    BF_Traversal();
    return 0;
}

void BF_Traversal()
{
    int v,end;

    for(v=0; v<n; v++)
        state[v] = initial;

    printf("\nEnter Starting Vertex for BFS: ");
    scanf("%d", &v);
    printf("\nEnter Ending Vertex for BFS: ");
    scanf("%d", &end);
    BFS(v,end);
}

void BFS(int v,int end)
{
    int i;
    j=0;
    temp = v;
    //q[v]=v;
    insert_queue(v);
    state[v] = waiting;

    while(!isEmpty_queue())
    {

        v = delete_queue( );
        printf("%d ",v);
        state[v] = visited;

        for(i=0; i<n; i++)
        {
            if(adj[v][i] == 1 && state[i] == initial)
            {
                q[i] = v;
                insert_queue(i);
                state[i] = waiting;
            }
        }
    }

    for(i=end;i>temp; ){
        r[j]=q[i];
        i=q[i];
        j++;
    }
    printf("\n");
    for(j=j-1;j>=0;j--){
        printf("%d ",r[j]);
    }
    printf("%d",end);


}

void insert_queue(int vertex)
{
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1)
            front = 0;
        rear = rear+1;
        queue[rear] = vertex ;
    }
}

int isEmpty_queue()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}

int delete_queue()
{
    int delete_item;
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        exit(1);
    }

    delete_item = queue[front];
    front = front+1;
    return delete_item;
}

void create_graph()
{
    int count,max_edge,origin,destin;

    printf("Enter number of vertices : ");
    scanf("%d",&n);
    max_edge = n*(n-1);

    for(count=1; count<=max_edge; count++)
    {
        printf("Enter edge %d( -1 -1 to quit ) : ",count);
        scanf("%d %d",&origin,&destin);

        if((origin == -1) && (destin == -1))
            break;

        if(origin>=n || destin>=n || origin<0 || destin<0)
        {
            printf("Invalid edge!\n");
            count--;
        }
        else
        {
            adj[origin][destin] = 1;
        }
    }
}
