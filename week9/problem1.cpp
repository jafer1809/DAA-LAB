#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
void print_sol(int dist[][100],int v)
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(dist[i][j]==INF)
            cout<<"INF ";
            else
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floyd(int graph[][100],int v)
{
    int dist[v][100];
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        dist[i][j]=graph[i][j];
    }
    int k;
    for(k=0;k<v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(dist[i][j]>dist[i][k]+dist[k][j] && (dist[i][k]!=INF && dist[k][j]!=INF))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    print_sol(dist,v);
}
int main()
{
    int v;
    cin>>v;
    int graph[v][100];
    int i,j;
    int a;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cin>>a;
            if(a<0)
            graph[i][j]=INF;
            else
            graph[i][j]=a;
        }
    }
    floyd(graph,v);
}