#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    int t;cin>>t;
	while(t--)
	{
		ll a,b;cin>>a>>b;
		ll ma=max(a,b);
		ll diagonal=1+ma*(ma-1);
		if(a==b)
		{
			cout<<diagonal<<endl;
		}
		else
		{
			if(a>b)
			{
				if(a%2==0)cout<<diagonal+(a-b)<<endl;
				else cout<<diagonal-(a-b)<<endl;
			}
			else 
			{
				if(b%2==0)cout<<diagonal-(b-a)<<endl;
				else cout<<diagonal+(b-a)<<endl;
			}
		}
	}  	
	return 0;
}
