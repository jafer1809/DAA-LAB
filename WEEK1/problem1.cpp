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
        int i,end=n,start=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int comp=1,key;
        int count=0;
        cin>>key;
        bool re=false;
        while(start<=end)
        {
            comp++;
            int mid=(start+end)/2;
            if(a[mid]==key)
            {
                re=true;
                count++;
            }
            else if(a[mid]<key)
            {
                start=mid+1;
            }
            else
            end=mid-1;

        }
        if(re)
        cout<<key<<"-"<<count;
        else
        cout<<"not present ";
        t--;

    }
    return 0;

}