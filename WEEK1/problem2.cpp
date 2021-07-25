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
        cin>>key;
        bool re=false;
        while(start<=end)
        {
            comp++;
            int mid=(start+end)/2;
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
        cout<<"present "<<comp<<endl;
        else
        cout<<"not present "<<comp<<endl;
        t--;

    }
    return 0;

}