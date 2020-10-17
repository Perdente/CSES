#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	vector<int>dp;
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		auto it=lower_bound(dp.begin(),dp.end(),x);
		if(it==dp.end())dp.push_back(x);
		else *it=x;
	}
	cout<<dp.size()<<endl;
	return 0;
}
