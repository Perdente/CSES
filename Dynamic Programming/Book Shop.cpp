#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,t;cin>>n>>t;
	vector<int>pr(n),val(n);
	for(int &x:pr)cin>>x;
	for(int &x:val)cin>>x;
	int dp[n+1][t+1];
	for(int i=0;i<=n;++i)
	{
		for(int j=0;j<=t;++j)
		{
			if(i==0 or j==0)dp[i][j]=0;
			else if(j>=pr[i-1])
			{
				dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-pr[i-1]]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[n][t]<<endl;
	return 0;
}
