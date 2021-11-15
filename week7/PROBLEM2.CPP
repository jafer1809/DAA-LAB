#include<bits/stdc++.h>
using namespace std;
void path(vector<int>& parent,int j)
{
    if(parent[j]==-1)
    {
        cout<<j<<" ";
        return;
    }
    cout<<j<<" ";
    path(parent,parent[j]);
}
int main()
{
    int m,n,src;
    cin>>n>>m;
    int i;
    vector<vector<pair<int,int>>> graph(n+1);
    for(i=0;i<m;i++)
    {
        int u,v,w;
        //cout<<"hii";
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
    }
    vector<int> dist(n+1,INT_MAX);
    cin>>src;
    dist[src]=0;
    set<pair<int,int>> s;
    s.insert({0,src});
    vector<int> parent(n+1,-1);
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        for(auto it: graph[x.second])
        {
            if(dist[it.first]>dist[x.second]+it.second)
            {
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
                parent[it.first]=x.second;
            }
        }
        for(i=1;i<n+1;i++)
        {
            path(parent,i);
            cout<<": "<<dist[i]<<endl;
        }
    }


}