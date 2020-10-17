#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
ll ans(int a,int b)
{
	ll res=1;
	while(b)
	{
		if(b%2)res=(res*a*1ll)%mod;
		a=(a*1ll*a)%mod;
		b>>=1;
	}
	return res;
}
 
int main()
{
    int n;cin>>n;
   	cout<<ans(2,n)<<endl;
	return 0;
}
