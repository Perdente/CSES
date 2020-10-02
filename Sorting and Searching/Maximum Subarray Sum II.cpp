#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 1e5+5;
#define ll long long
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	ll n,a,b;cin>>n>>a>>b;
   	ll ar[n],presum[n];
   	for(int i=0;i<n;++i)
   	{
   		cin>>ar[i];
	}
	presum[0]=ar[0];
	for(int i=1;i<n;++i)
	{
		presum[i]=presum[i-1]+ar[i];
	}
	multiset<ll>s;
	s.insert(0);
	ll ans=-9e18;
	ans=max(ans,presum[a-1]);
	int flag=0;
	for(int i=a;i<n;++i)
	{
		if(i-b>=0)
		{
			if(!flag)
			{
				auto it=s.find(0);
				s.erase(it);
				flag=1;
			}
		}
		if(i-a>=0)
		{
			s.insert(presum[i-a]);
		}
		ans=max(ans,presum[i]-*s.begin());
		if(i-b>=0)
		{
			auto it=s.find(presum[i-b]);
			s.erase(it);
		}
	}
	cout<<ans<<endl;
	return 0;
}
