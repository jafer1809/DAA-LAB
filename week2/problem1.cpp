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
        int i,end=n-1,start=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int comp=1,key;
        int count=0;
        cin>>key;
        bool re=false;
        int mid=0;
        while(end>=start)
        {
            comp++;
             mid=(start+end)/2;
            if(a[mid]==key)
            {
                re=true;
                break;
            }
            else if(a[mid]<key)
            {
                start=mid+1;
            }
            else
            end=mid-1;

        }
        
        if(re)
        {
            int j;
            count++;
            for(i=mid+1,j=mid-1;a[i]==key||a[j]==key;i++,j--)
            {
               
                count++;
                
            }
        cout<<key<<"-"<<count;
        }
        else
        cout<<"not present ";
        t--;

    }
    return 0;

}