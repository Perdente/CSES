#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,sum=0,ma=-9e18;
	cin>>n;
    vector<ll>v(n);
    for(ll &i:v)
    {
    	cin>>i;
    	sum=max(sum+i,i);
    	ma=max(ma,sum);
	}
	cout<<ma<<endl;
	return 0;
}
