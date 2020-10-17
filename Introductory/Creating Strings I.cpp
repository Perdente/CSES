#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    string s;cin>>s;
    vector<string>v;
    sort(s.begin(),s.end());
    do
    {
    	v.push_back(s);
	}
	while(next_permutation(s.begin(),s.end()));
	cout<<v.size()<<endl;
	for(auto i:v)
	{
		cout<<i<<endl;
	}
	return 0;
}
