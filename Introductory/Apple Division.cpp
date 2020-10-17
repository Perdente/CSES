#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
int main()
{
	int n;cin>>n;
    ll sum=0;
    ll a[n];
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
    	sum+=a[i];
	}
	ll ans=sum;
	for(int i=0;i<(1<<n);++i)
	{
		ll temp=0;
		for(int j=0;j<n;++j)
		{
			if(i & 1<<j)temp+=a[j];
		}
		ll x=abs(sum-temp);
		ans=min(ans,abs(temp-x));
	}
	cout<<ans<<endl;
	return 0;
}
