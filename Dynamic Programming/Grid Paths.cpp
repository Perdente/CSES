#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int dp[n][n];
    char a[n][n];
    for(int i=0;i<n;++i)
    {
    	for(int j=0;j<n;++j)
    	{
    		cin>>a[i][j];
		}
	}
	if(a[0][0]=='*')return cout<<0<<endl,0;
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=0;i<n;++i)
    {
    	for(int j=0;j<n;++j)
    	{
    		if(a[i][j]=='.')
    		{
    			if(i>0)
	    		{
	    			dp[i][j]+=dp[i-1][j];
	    			dp[i][j]%=mod;
				}
				if(j>0)
				{
					dp[i][j]+=dp[i][j-1];
					dp[i][j]%=mod;
				}
			}
		}
	}
	cout<<dp[n-1][n-1]<<endl;
    return 0;
}
