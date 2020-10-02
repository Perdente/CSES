
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,cnt=0;cin>>n;
    multimap<pair<int,int>,int>mp;
    for(int i=0;i<n;++i)
    {
    	int x,y;cin>>x>>y;
    	mp.insert({{x,y},i});
	}
	vector<int>v(n);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	for(auto i=mp.begin();i!=mp.end();++i)
	{
		int a,b,c;
		tie(a,b)=i->first;
		if(pq.empty() or get<0>(pq.top())>=a)
		{
			c=++cnt;
		}
		else
		{
			c=get<1>(pq.top());
			pq.pop();
		}
		pq.push({b,c});
		v[i->second]=c;
	}
	cout<<cnt<<endl;
	for(auto i:v)cout<<i<<" ";
	
	return 0;
}
