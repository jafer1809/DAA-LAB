#include<bits/stdc++.h>
using namespace std;
vector<int> parent(100);
vector<int> weight(100);
void make_set(int v)
{
    parent[v]=v;
    weight[v]=1;
}
int find_parent(int v)
{
    if(parent[v]==v)
    return v;
    else return parent[v]=find_parent(parent[v]);
}
void union_byweight(int u,int v)
{
    int a=find_parent(u);
    int b=find_parent(v);
    if(a!=b)
    {
        if(weight[a]<weight[b])
        swap(a,b);
        parent[b]=a;
        weight[a]+=weight[b];
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int i;
    for(i=0;i<n;i++)
    make_set(i);
    int u,v,w;
    vector<vector <int>> graph;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        graph.push_back({w,v,u});
        graph.push_back({w,u,v});
    }
    sort(graph.begin(),graph.end());
    int ans=0;
    for(auto x: graph)
    {
        u=x[1];
        v=x[2];
        w=x[0];
        int a=find_parent(u);
        int b=find_parent(v);
        if(a==b)
        continue;
        else
        {
            ans=ans+w;
            union_byweight(u,v);
        }
    }
    cout<<ans<<endl;
}