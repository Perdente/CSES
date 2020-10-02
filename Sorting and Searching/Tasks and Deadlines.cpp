#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>arr;
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end());
    ll sum=0;
    ll start=0;
    for(ll i=0;i<n;i++)
    {
        start+=arr[i].first;
        sum+=arr[i].second-start;
    }
    cout<<sum;
}
