#include<iostream>
using namespace std;
int mod(int n)
{
    if(n<0)
    return -n;
    else 
    return n; 
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        int i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;

        int count=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(mod(a[i]-a[j])==key)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
}