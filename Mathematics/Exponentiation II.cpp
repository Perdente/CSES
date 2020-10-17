#include<bits/stdc++.h>
#define ll long long
const long long mod = 1e9+7;
using namespace std;
 
ll power(ll a,ll b,ll mod)
{
    ll rem,ans=1ll;
    rem=a%mod;
    while(b)
    {
        if(b%2ll)ans=(ans*rem)%mod;
        rem=(rem*rem)%mod;
        b/=2ll;
    }
    return ans;
    
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    for(int i=0;i<n;++i)
    {
        ll a,b,c;cin>>a>>b>>c;
        ll ans=power(a,power(b,c,mod-1),mod);
        cout<<ans<<endl;
    }
	return 0;
}
