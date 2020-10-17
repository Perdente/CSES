#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
 
ll sumOfDivisors(ll n)
{
	ll res=0;
	for(ll i=1;i<=sqrt(n);++i)
	{
		ll p=(n/i)%mod;
		res=(res+ ((p-i)*i + p*(p+1)/2 - i*(i-1)/2 ))%mod;
	}
	return res;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    cout<<sumOfDivisors(n)<<endl;
	return 0;
}
