#include<bits/stdc++.h>
using namespace std;
void path(vector<int>& parent,int j)
{
    if(parent[j]==-1)
    {
        cout<<j+1<<" ";
        return;
    }
    cout<<j+1<<" ";
    path(parent,parent[j]);
}
int main()
{
    int m,n;
    int i;
    vector<vector <int>> graph;
    int u,v,w;
     int src;
   
    cin>>n>>m;
     cin>>src;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        graph.push_back({u,v,w});
    }
    vector<int> parent(n+1,-1);
    vector<int> dist(n+1,1e9);
    dist[src]=0;
    for(i=1;i<n;i++)
    {
        for(auto x: graph)
        {
            u=x[0];
            v=x[1];
            w=x[2];
            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                parent[v]=u;
            }
        }
    }
     for(i=0;i<n;i++)
     {
         path(parent,i);
         cout<<"dist: "<<dist[i]<<endl;
     }

}