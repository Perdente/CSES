#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	ll n;cin>>n;
   	ll a[mx];
   	for(ll i=0;i<n;++i)
   	{
   		cin>>a[i];
	}
	map<ll,ll>mp;
	ll ans=0;
	for(ll i=0,j=0;i<n;++i)
	{
		j=max(mp[a[i]],j);
		ans=max(ans,i-j+1);
		mp[a[i]]=i+1;
	}
	cout<<ans<<"\n";
	return 0;
}
