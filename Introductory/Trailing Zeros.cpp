#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e7+5;
#define ll long long
 
int main()
{
	ll n,s=0,k=5;cin>>n;
	while(k<=n)
	{
		s+=n/k;
		k*=5;
	}
	cout<<s<<endl;
	return 0;
}
