#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ll n;cin>>n;
    ll a,b;
    while(n--)
    {
    	cin>>a>>b;
    	if(min(a,b)*2>=max(a,b) and (a+b)%3==0)
    	{
    		cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
