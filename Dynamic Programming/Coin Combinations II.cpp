#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,sum;
    cin>>n>>sum;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=0;j<=sum;++j)
        {
        	dp[i][j]=dp[i-1][j];
        	if(j>=v[i-1])
        	{
        		dp[i][j]+=dp[i][j-v[i-1]];
        		dp[i][j]%=mod;
			}
        }
    }
//    for(int i=0;i<=n;++i)
//    {
//        for(int j=0;j<=sum;++j)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    cout<<dp[n][sum]<<endl;
	return 0;
}
