#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	ll n;cin>>n;
   	cout<<n<<" ";
   	while(n!=1)
   	{
   		if(n&1)
   		{
   			n=n*3+1;
		}
		else
		{
			n/=2;
		}
		cout<<n<<" ";
	}
	cout<<endl;
	return 0;
}
