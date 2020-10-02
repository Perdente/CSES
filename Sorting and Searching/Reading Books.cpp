#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;cin>>n;
	ll sum=0,ma=INT_MIN;
	for(int i=0;i<n;++i)
	{
		ll x;cin>>x;
		sum+=x;
		ma=max(ma,x);
	}
	cout<<(ma>(sum-ma)?2*ma:sum)<<endl;
	return 0;
}
