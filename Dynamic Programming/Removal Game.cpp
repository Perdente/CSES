#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	long long sum=0;
	vector<long long>v(n);
	for(long long &i:v)cin>>i,sum+=i;
	long long dp[n][n];
	for(int i=n-1;i>=0;--i)
	{
		for(int j=i;j<n;++j)
		{
			if(i==j)
			{
				dp[i][j]=v[i];
			}
			else
			{
				dp[i][j]=max(v[i]-dp[i+1][j],v[j]-dp[i][j-1]);
			}
		}
	}
	cout<<(sum+dp[0][n-1])/2<<endl;
	return 0;
}
