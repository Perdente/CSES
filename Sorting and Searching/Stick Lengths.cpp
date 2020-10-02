#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;cin>>n;
    vector<ll>v(n);
    for(ll &i:v)
    {
    	cin>>i;
	}
	sort(v.begin(),v.end());
	ll mid=v[n/2],ans=0;
	for(ll &i:v)
	{
		ans+=abs(i-mid);
	}
	cout<<ans<<endl;
	return 0;
}
