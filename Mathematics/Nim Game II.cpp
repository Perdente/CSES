#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
    	int n,flag=0;
    	cin>>n;
    	vector<int>v(n);
    	for(int &i:v)
    	{
    		cin>>i;
    		flag^=i%4;
		}
		cout<<(flag?"first":"second")<<endl;
    	
	}
	return 0;
}
