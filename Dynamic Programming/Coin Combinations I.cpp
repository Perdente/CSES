#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,sum;
    cin>>n>>sum;
    vector<int>v(n);
    for(int &x:v)cin>>x;
    int dp[sum+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int j=1;j<=sum;++j)
    {
        for(int i=0;i<n;++i)
        {
        	if(j>=v[i])
        	{
        		dp[j]+=dp[j-v[i]];
        		dp[j]%=mod;
			}
		}
    }
//    for(auto i:dp)
//    {
//    	cout<<i<<" ";
//	}
//	cout<<endl;
    cout<<dp[sum]<<endl;
    return 0;
}
