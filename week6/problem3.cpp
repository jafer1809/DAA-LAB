#include<bits/stdc++.h>
using namespace std;
bool iscycle(int src, vector<vector<int>>& adj, vector<bool>& vis, int
    parent){
    vis[src] = true;
    cout<<src<<parent<<" ";
    for(auto i: adj[src]){
        cout<<i<<parent<<" ";
        if(i != parent){
            if(vis[i])
                return true;
            if(!vis[i] and iscycle(i,adj,vis,src)){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<bool> vis(n,false);
    bool cycle = false;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
  
// set node 0 as visited
    vis[0] = true;
    for(int i=0;i<n;i++){
        if(!vis[i] and iscycle(i, adj, vis, -1)){
            cycle = true;
            break;
        }
    }
    if(cycle)
        cout<<"Yes Cycle Exists";
    else
        cout<<"Cycle Not Present";
    return 0;
}