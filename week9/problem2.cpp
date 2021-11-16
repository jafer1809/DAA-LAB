#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,double> a,pair<int,double> b)
{
    double v1=(double) a.first/a.second;
    double v2=(double) b.first/b.second;
    return v1>v2;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,double>> obj(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>obj[i].first>>obj[i].second;
    }
    sort(obj.begin(),obj.end(),comp);
    int wt;
    cin>>wt;
    double ans=0;
    vector<pair<int,double>> res;
    for(i=0;i<n;i++)
    {
        if(wt>=obj[i].second)
        {
            ans+=obj[i].first;
            wt-=obj[i].second;
            res.push_back({i+1,obj[i].second});
            continue;
        }
        double v=(double)obj[i].first/obj[i].second;
        ans+=wt*v;
        break;

    }
    cout<<ans<<wt;
    for(auto x: res)
    {
        cout<<x.first<<"-"<<x.second<<endl;
    }
}
