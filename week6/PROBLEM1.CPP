#include<bits/stdc++.h>
using namespace std;
bool dfs(int s, int d, vector<vector <int>>& graph)
{
    if(s==d)
    return true;
    int n=graph.size();
    vector<bool> visited(n,false);
    visited[s]=true;
    stack<int> st;
    st.push(s);
    while(!st.empty())
    {
        int a=st.top();
        st.pop();
        cout<<a<<" ";
        for(int x: graph[a])
        {
            if(x==d)
            return true;
            if(!visited[x])
            {
                visited[x]=true;
                st.push(x);
            }

        }
    }
    return false;

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector <int>> graph(n);
    int i,u,v;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int src,dest;
    cin>>src>>dest;
    if(dfs(src,dest,graph))
    cout<<"exist";
    else
    cout<<"not exist";
}