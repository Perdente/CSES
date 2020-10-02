#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
const int mx = 2e5+5;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,sum;cin>>n>>sum;
    vector<ll>v(n),presum(n,0);
    for(int i=0;i<n;++i)
    	cin>>v[i];
    presum[0]=v[0];	
	for(int i=1;i<n;++i)
		presum[i]=presum[i-1]+v[i];
	
	ll j=0,cnt=0;
	for(int i=0;i<n;++i)
	{
		if(presum[i]>sum)
		{
			while(j<i)
			{
				int p=presum[i]-presum[j];
				if(p==sum)
				{
					cnt++;
					break;
				}
				else if(p<sum)break;
				j++;
			}
		}
		else if(presum[i]==sum)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
