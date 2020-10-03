#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
const int mx = 2e5+5;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,sum;cin>>n>>sum;
    vector<ll>v(n);
    for(int i=0;i<n;++i)
    	cin>>v[i];
    ll m=0,cnt=0;
    map<ll,ll>mp;
    for(int i=0;i<n;++i)
    {
    	m+=v[i];
    	if(m==sum)cnt++;
    	if(mp.count(m-sum))
    	{
    		cnt+=mp[m-sum];
		}
		mp[m]++;
	}
	cout<<cnt<<endl;
	return 0;
}
