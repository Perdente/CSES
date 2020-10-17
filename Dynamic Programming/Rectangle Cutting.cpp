#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int w,h;cin>>w>>h;
	int dp[w+1][h+1];
	for(int i=1;i<=w;++i)
	{
		for(int j=1;j<=h;++j)
		{
			if(i==j)dp[i][j]=0;
			else
			{
				dp[i][j]=1e9;
				for(int width=1;width<i;++width)
				{
					dp[i][j]=min(dp[i][j],1+dp[width][j]+dp[i-width][j]);
				}
				for(int height=1;height<j;++height)
				{
					dp[i][j]=min(dp[i][j],1+dp[i][height]+dp[i][j-height]);
				}
			}
		}
	}
	cout<<dp[w][h]<<endl;
	return 0;
}
