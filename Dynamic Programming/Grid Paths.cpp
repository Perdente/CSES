#include<bits/stdc++.h>
#define int long long int
#define long long
const int mod=1e9+7;
using namespace std;
 
signed main()
{
	int n;cin>>n;
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(int i=1;i<=n;++i)
	{
		for(int x=1;x<=6;++x)
		{
			if(i-x>=0)dp[i]+=dp[i-x],dp[i]%=mod;
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
