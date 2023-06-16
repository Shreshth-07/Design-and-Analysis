#include<stdio.h>
#define V 4
#define INF 999
void printSol(int dist[][V]);
void Floyd (int graph[][V])
{
    int dist[V][V],i,j,k;
    for(i=0;i<V;i++)
    for(j=0;j<V;j++)
    dist[i][j] = graph[i][j];
    for(k=0;k<V;k++)
    {
        for(i=0;i<V;i++)
        {
            for(j=0;j<v;j++)
            {
                if(dist[i][j]+dist[k][j] < dist[i][j])
                dist[i][j] = dist[i][k]+dist[k][j];
            }
        }
    }
    printSol(dist);
}
void printSol(int dist [][V])
{
    printf("the following matrix show the shortest distance");
    for(i=0;i<V;i++)
    {
        for(j=0;j<V;j++)
        {
            if (dist[i][j]==INF)
            printf("%s","INF");
            else
            printf("%d",dist[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int graph[V]{V} ={
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0}
    } 
    floyd(graph);
    return 0;
}