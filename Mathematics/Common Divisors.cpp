/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mx 1000001
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin>>n;
	vector<int>v(n),cnt(mx,0);
	for(int i=0;i<n;++i)
	{
		cin>>v[i];
		cnt[v[i]]++;
	}
	for(int i=mx;i>=1;--i)
	{
		ll ans=0;
		for(int j=i;j<=mx;j+=i)
		{
			ans+=cnt[j];
		}
		if(ans>=2)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}*/



#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int mark[mx];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=1;j*j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				mark[j]++;
				mark[a[i]/j]++;
			}
		}
	}
	for(int i=mx;i>=1;--i)
	{
		if(mark[i]>1)
		{
			return cout<<i<<endl,0;
		}
	}
}
