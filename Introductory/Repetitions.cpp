#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	string s;cin>>s;
   	int ma=INT_MIN;
   	map<char,int>mp;
   	for(auto i:s)
   	{
   		mp[i]++;
   		if(mp.size()==2)
   		{
   			mp.clear();
   			mp[i]++;
		}
   		ma=max(ma,mp[i]);
	}
	cout<<ma<<endl;
	return 0;
}
