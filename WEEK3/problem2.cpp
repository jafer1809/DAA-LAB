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
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;comp++;shift++;
                }
                comp++;
            }
        }
         for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n"<<comp<<" "<<shift;
    
    }
}