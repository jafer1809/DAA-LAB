#include<bits/stdc++.h>
using namespace std;
vector<bool> visited;
vector<int> col;
bool bipart;
void bfs(int u,int cur,vector<vector <int>>& graph)
{
    if(col[u]!=-1 && col[u]!=cur)
    {
        bipart=false;
        return;
    }
    col[u]=cur;
    if(visited[u])
    return;
    visited[u]=true;
    for(int x: graph[u])
    bfs(x,cur ^ 1,graph);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector <int>> graph(n);
    visited=vector<bool> (n,0);
    col=vector<int> (n,-1);
    bipart=true;
    int i,u,v;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        bfs(i,0,graph);
    }
    if(bipart)
    cout<<"true";
    else
    cout<<"false";
}