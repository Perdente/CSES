#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	ll n;cin>>n;
   	ll sum=n*(n+1)/2;
   	if(sum%2)cout<<"NO"<<endl;
   	else 
   	{
   		cout<<"YES"<<endl;
   		sum/=2;
   		int i=1,j=n;
   		ll temp=0;
   		multiset<ll>s;
   		while(i<j and temp<sum)
   		{
   			if(i+j+temp<=sum)
   			{
   				temp+=i+j;
   				s.insert(i);
   				s.insert(j);
   				j--;i++;
			}
			else if(j+temp<=sum)
			{
				temp+=j;
				s.insert(j);
				j--;
			}
			else if(i+temp<=sum)
			{
				temp+=i;
				s.insert(i);
				i++;
			}
		}
		cout<<n-(ll)s.size()<<endl;
   		for(int i=1;i<=n;++i)
   		{
   			if(!s.count(i))cout<<i<<" ";
		}
		cout<<endl;
		cout<<s.size()<<endl;
		for(auto i:s)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
