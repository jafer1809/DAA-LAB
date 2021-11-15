#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
int shortestpath(int graph[][100],int src,int dest,int k,int n)
{
    if(k==0 && src==dest)
    return 0;
    else if(k==1 && graph[src][dest]!=INF)
    return graph[src][dest];
    if(k<0)
    return INF;
    int res=INF;
    for(int i=0;i<n;i++)
    {
        if(graph[src][dest] && src!=i && dest!=i)
        {
            int rec_res=shortestpath(graph,i,dest,k-1,n);
            if(rec_res!=INF)
            res=min(rec_res+graph[src][i],res);
        }
    }
    return res;

}
int main()
{
    int u,v;
    cin>>u>>v;
    int a;
    int graph[u][100];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
        cin>>a;
        if(a<0)
        graph[i][j]=INF;
        else
        graph[i][j]=a;
        }
    }
    int src,dest,k;
    cin>>src>>dest>>k;
    cout<<"shortest weight path: "<<shortestpath(graph,src-1,dest-1,k,v);
}