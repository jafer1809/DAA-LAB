#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i,j,cur;
        for(i=0;i<n;i++)
        cin>>a[i];
        int comp=0;
        int shift=0;
        for(i=1;i<n;i++)
        {
            int curr=a[i];
            j=i-1;
            while(a[j]>curr&&j>=0)
            {
                comp++;
                a[j+1]=a[j];
                shift++;
                j--;
            }
            comp++;
            a[j+1]=curr;
        }
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n"<<comp<<" "<<shift;
    }
}