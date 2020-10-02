#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
ll n,m;
ll ar[mx];
bool check(ll p)
{
	ll sum=0;
	for(int i=0;i<n;++i)
	{
		sum+=min(p/ar[i],(ll)1e9);
	}
	return sum>=m;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	cin>>n>>m;
   	for(int i=0;i<n;++i)
   	{
   		cin>>ar[i];
	}
	ll low=0,hi=1e18;
	while(low<hi)
	{
		ll mid=low/2+hi/2;
		if(check(mid))
		{
			hi=mid;
		}
		else low=mid+1;
	}
	cout<<low<<endl;
	return 0;
}
