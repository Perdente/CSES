#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int>v(n);
	for(int &i:v)cin>>i;
	int dp[n+2][m+2];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			if(i==1)
			{
				if(v[i-1]==0 or v[i-1]==j)
				{
					dp[i][j]=1;
				}
				else dp[i][j]=0;
			}
			else
			{
				if(v[i-1]==0 or v[i-1]==j)
				{
					dp[i][j]=((dp[i-1][j-1]+dp[i-1][j])%mod+dp[i-1][j+1])%mod;
					dp[i][j]%=mod;
				}
				else
				{
					dp[i][j]=0;
				}
			}
		}
	}
//	for(int i=1;i<=n;++i)
//	{
//		for(int j=1;j<=m;++j)
//		{
//			cout<<dp[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	int ans=0;
	for(int j=1;j<=m;++j)
	{
		ans+=dp[n][j];
		ans%=mod;
	}
	cout<<ans<<endl;
	return 0;
}
