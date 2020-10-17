#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	int n;cin>>n;
   	map<int,int>mp;
   	for(int i=0;i<n-1;++i)
   	{
   		int x;
   		cin>>x;
   		mp[x]=1;
	}
	for(int i=1;i<=n;++i)
	{
		if(mp[i]==0)
		{
			cout<<i<<endl;return 0;
		}
	}
	return 0;
}
