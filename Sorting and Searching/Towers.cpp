#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 200005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,x;cin>>n;
    multiset<int>s;
    for(int i=0;i<n;++i)
    {
    	cin>>x;
    	auto it=s.upper_bound(x);
    	//cout<<*it<<endl;
    	if(it==s.end())s.insert(x);
    	else
    	{
    		s.erase(it);
    		s.insert(x);
		}
	}
	cout<<s.size()<<endl;
	return 0;
}
