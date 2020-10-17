#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
 
int main()
{
    string s;cin>>s;
    map<char,int>mp;
    for(auto i:s)
    {
    	mp[i]++;
	}
	int cnt=0;
	char ch;int k=0;
	for(auto i:mp)
	{
		if(i.second&1)
		{
			tie(ch,k)=make_tuple(i.first,i.second);
			cnt++;
		}
	}
	string str="";
	if(cnt>=2)cout<<"NO SOLUTION"<<endl;
	else
	{
		for(auto i:mp)
		{
			if(i.second%2==0)
			{
				int temp=0;
				temp=i.second/2;
				while(temp--)
				{
					str+=i.first;
				}
			}
		}
		string str1=str;
		reverse(str1.begin(),str1.end());
		while(k--)
		{
			str+=ch;
		}
		cout<<str<<str1<<endl;
	}
	return 0;
}
