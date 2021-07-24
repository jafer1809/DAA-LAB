#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,comp=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    int key,t=1;
    cin>>key;
    for(i=0;i<n;i++)
    {
        comp++;
        if(key==a[i])
        {
            t=0;
            break;
        }
    }
    if(t==0)
    cout<<comp<<" "<<i+1;
    else
    cout<<comp<<" "<<"n0";
    return 0;
}