#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
   	int n;cin>>n;
   	if(n==2 or n==3)return cout<<"NO SOLUTION"<<endl,0;
   	vector<int>v;
   	
   	for(int i=1;i<=n;++i)
   	{
   		if(!(i&1))cout<<i<<" ";
	}
	for(int i=1;i<=n;++i)
   	{
   		if(i&1)cout<<i<<" ";
	}
	return 0;
}
