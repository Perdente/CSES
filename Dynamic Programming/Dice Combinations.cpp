#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int sum;
    cin>>sum;
    int dp[sum+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=sum;++i)
    {
        for(int j=1;j<=6 and (i-j)>=0;++j)
        {
        	dp[i]+=dp[i-j];
        	dp[i]%=mod;
        }
    }
    cout<<dp[sum]<<endl;
    return 0;
}
