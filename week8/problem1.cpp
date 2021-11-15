#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<pair<int,int>> graph[m];
    for(int i=0;i<n;i++)
    {
        int a,b,wt;
        cin>>a>>b>>wt;
        graph[a].push_back({b,wt});
        graph[b].push_back({a,wt});
    }
    vector<bool> msset(m,false);
    vector<int> parent(m);
    vector<int> key(n,INT_MAX);
    key[0]=0;
    int ans=0;
    parent[0]=-1;
    for(int i=0;i<n-1;i++)
    {
        int mini=INT_MAX,u;
        for(int v=0;v<m;v++)
        {
            if(msset[v]==false && key[v]<mini)
            {
                mini=key[v];
                u=v;
            }
        }
        msset[u]=true;
        ans+=mini;
        for(auto it: graph[u])
        {
            int v=it.first;
            int wt=it.second;
            if(msset[v]==false && key[v]>wt)
            {
                key[v]=wt;
                parent[v]=u;
            }
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<parent[i]<<"-"<<i<<endl;
    }
}