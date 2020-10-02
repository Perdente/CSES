#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,x;cin>>n;
    set<int>s;
    for(int i=0;i<n;++i)
    {
    	cin>>x;
    	s.insert(x);
	}
	cout<<s.size()<<endl;
	return 0;
}
