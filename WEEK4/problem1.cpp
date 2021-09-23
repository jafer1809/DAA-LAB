#include<iostream>
using namespace std;
void merge(int a[],int l,int r,int mid)
{
    int n1,n2;
    n1=mid-l+1;
    n2=r-mid;
    int a1[n1];
    int a2[n2];
    int i,j;
    for(i=0;i<n1;i++)
    a1[i]=a[l+i];
    for(j=0;j<n2;j++)
    a2[j]=a[1+mid+j];
    i=0;
    j=0;
    int k=l;
    while(i<n1&&j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            i++;
        }
        else
        {
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }
     while(j<n2)
    {
        a[k]=a2[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r,mid);


    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i,l=0,r=n-1;
        for(i=0;i<n;i++)
        cin>>a[i];
        mergesort(a,l,r);
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
}