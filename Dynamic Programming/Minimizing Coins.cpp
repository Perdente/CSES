#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,sum;
    cin>>n>>sum;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    vector<int>dp(sum+1,1e9);
    dp[0]=0;
    for(int j=1;j<=sum;++j)
    {
    	for(int i=1;i<=n;++i)
    	{
    		if(j>=v[i-1])
    		{
    			dp[j]=min(dp[j],1+dp[j-v[i-1]]);
    			dp[j]%=mod;
			}
		}
	}
	if(dp[sum]==1e9)return cout<<-1<<endl,0;
	//for(auto i:dp)cout<<i<<" ";
	cout<<dp[sum]<<endl;
    return 0;
}
