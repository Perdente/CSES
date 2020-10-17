#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
   	int n;cin>>n;
   	ll v[n];
   	for(int i=0;i<n;++i)
   	{
   		cin>>v[i];
	}
	ll cnt=0;
	for(int i=1;i<n;++i)
	{
		if(v[i-1]>v[i])
		{
			cnt+=v[i-1]-v[i];
			v[i]+=v[i-1]-v[i];
		}
	}
	cout<<cnt<<endl;
	return 0;
}
