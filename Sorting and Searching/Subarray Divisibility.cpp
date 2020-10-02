#include<bits/stdc++.h>
using namespace std;
const int mo = 1e9+7;
#define ll long long
const int mx = 2e5+5;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,sum=0;cin>>n;
    vector<ll>v(n),mod(n,0);
    for(ll i=0;i<n;++i)
    {
    	cin>>v[i];
    	sum+=v[i];
		mod[((sum%n)+n)%n]++;	
	}
	ll res=0;
	for(ll i=0;i<n;++i)
	{
		if(mod[i]>1)
		{
			res+=(mod[i]*(mod[i]-1)/2);
		}
	}
	res+=mod[0];
	cout<<res<<endl;
	return 0;
}
