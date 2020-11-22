#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5,mod=1e9+7;
 
int dp[105][N];
int arr[105];
 
signed main()
{
	int n,sum;cin>>n>>sum;
	for(int i=1;i<=n;++i)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=n;++i)dp[i][0]=1;
	for(int i=1;i<=n;++i)
	{
		for(int x=1;x<=sum;++x)
		{
			dp[i][x]=dp[i-1][x] + (x-arr[i]>=0 ? dp[i][x-arr[i]] : 0);
			dp[i][x]%=mod;
		}
	}
	cout<<dp[n][sum]<<endl;
	return 0;
}
