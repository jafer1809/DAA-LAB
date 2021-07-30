#include<iostream>
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
        int i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int t=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[i]+a[j]==a[k])
                    {
                        t=1;
                        break;
                    }
                    if(a[i]+a[j]<a[k])
                    {
                        break;
                    }
                }
                if(t==1)
                break;
            }
            if(t==1)
            break;
        }
        if(t==1)
        cout<<i++<<" "<<j++<<" "<<k++<<endl;
        else
        cout<<"not found\n";

        t--;
    }
}
