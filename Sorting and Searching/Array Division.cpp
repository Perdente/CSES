#include<bits/stdc++.h>
using namespace std;
const int mo = 1e9+7;
#define ll long long
const ll mx = 2e5+5;
ll n,k,hi=0,low=9e18,cnt;
ll v[mx];
bool check(ll tot)
{
	ll temp=0,cnt=1;
	for(ll i=0;i<n;++i)
	{
		if(v[i]>tot)return false;
		if(v[i]+temp<=tot)temp+=v[i];
		else {
			temp=v[i];cnt++;
		}
	}
	
	return cnt<=k;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(ll i=0;i<n;++i)
    {
    	cin>>v[i];
    	hi+=v[i];
    	if(v[i]<low)low=v[i];
	}
	ll ans=-1;
	while(low<=hi)
	{
		ll mid=(low+hi)/2;
		if(check(mid))
		{
			//cout<<ans<<endl;
			ans=mid;
			hi=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
