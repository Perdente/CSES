#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
const int mx = 2e5+5;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)
    {
    	cin>>v[i];
	}
	stack<int>s;
	for(int i=0;i<n;++i)
	{	
		while(!s.empty() and v[s.top()]>=v[i])
		{
			s.pop();
		}
		if(s.empty())
		{
			cout<<0<<" ";
		}
		else
		{
			cout<<s.top()+1<<" ";
		}
		s.push(i);
	}
	return 0;
}
