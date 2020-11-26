#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=505,mod=1e9+7;
 
int n;
int dp[N][N*N];
 
int main()
{
	cin>>n;
	dp[0][0]=1;
	int sum=(n*(n+1))/4;
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<=sum;++j)
		{
			dp[i][j]= dp[i-1][j] + ((j-i)>=0?dp[i-1][j-i]:0);
			dp[i][j]%=mod;
		}
	}
	cout<<((n*(n+1))%4==0?dp[n-1][sum]:0)<<endl;
	return 0;
}
