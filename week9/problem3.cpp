#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    priority_queue<int, vector<int>, greater<int> > min_heap;
    for(int i=0;i<n;i++)
    {
        min_heap.push(a[i]);
    }
    int ans=0;
    while(min_heap.size()>1)
    {
        int e1=min_heap.top();
        min_heap.pop();
        int e2=min_heap.top();
        min_heap.pop();
        cout<<e1+e2<<" ";
        ans+=e1+e2;
        min_heap.push(e1+e2);
    }
    cout<<ans;
}