#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        int i,end=n,start=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int comp=1,key;
        cin>>key;
        bool re=false;
        int j=0;
        int m=sqrt(n);
        while(a[m]<=key && m<n)
        {
            j=m;
            m=m+sqrt(n);
            if(m>n-1)
            break;
        }
        for(i=j;i<m;i++)
        {
            comp++;
            if(a[i]==key)
            {
                re=true;
                break;
            }
        }
        if(re)
        cout<<"present "<<comp<<endl;
        else
        cout<<"not present "<<comp<<endl;
        t--;
    }
    return 0;
}