#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;++i)
    {
    	for(char ch:to_string(i))
    	{
    		if(i-(ch-'0')>=0)
    		{
    			dp[i]=min(dp[i],1+dp[i-(ch-'0')]);
			}
		}
	}
	cout<<dp[n]<<endl;
    return 0;
}
