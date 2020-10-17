#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int fact[mx];
 
int binpow(int a,int b)
{
	int res=1;
	while(b>0)
	{
		if(b%2)res=(res*1ll*a)%mod;
		a=(a*1ll*a)%mod;
		b>>=1;
	}
	return res;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    fact[0]=fact[1]=1;
    for(int i=2;i<=mx;++i)
    {
    	fact[i]=(fact[i-1]*1ll*i)%mod;
	}
    string s;cin>>s;
    map<char,int>mp;
	for(auto i:s)
	{
		mp[i]++;
	}
	int n=s.size();
	int sum=fact[n];
	for(auto i:mp)
	{
		sum=(sum*1ll*binpow(fact[i.second],mod-2))%mod;
	}
	cout<<sum<<endl;
	return 0;
}
