#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,j=0,i=0;cin>>n;
    vector<int>v(n);
	map<int,int>mp;
    for(int &i:v)cin>>i;
    int len=0,mlen=0;
	while(j<n)
	{
		if(mp.find(v[j])==mp.end() or mp[v[j]]==0)
		{
			mp[v[j]]++;
			len++;
			mlen=max(mlen,len);
			j++;
		}
		else
		{
			len--;
			mp[v[i]]--;
			i++;
		}
	}
	cout<<mlen<<endl;
	return 0;
}
