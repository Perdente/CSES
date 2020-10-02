#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 2000005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,x;cin>>n>>x;
    vector<int>a(n);
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i)
    {
    	int xx;
    	cin>>xx;
    	a[i]=xx;
    	v[i]={xx,i+1};
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;++i)
	{
		int low=0,hi=n-1;
		while(low<hi)
		{
			if(v[low].second==i+1)low++;
			else if(v[hi].second==i+1)hi--;
			else if(v[low].first+v[hi].first+a[i]>x)hi--;
			else if(v[low].first+v[hi].first+a[i]<x)low++;
			else
			{
				cout<<v[low].second<<" "<<v[hi].second<<" "<<i+1<<endl;return 0;
			}
		}
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}
