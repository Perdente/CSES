#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1005,mx=1e5+5;
int cost[N],pg[N];
int dp[N][mx];
int main()
{
	int n,tot;cin>>n>>tot;
	for(int i=1;i<=n;++i)cin>>cost[i];
	for(int i=1;i<=n;++i)cin>>pg[i];
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=tot;++j)
		{
			dp[i][j]=max(dp[i-1][j],(j-cost[i]>=0)?pg[i]+dp[i-1][j-cost[i]]:0);
		}
	}
	cout<<dp[n][tot]<<endl;
	return 0;
}
