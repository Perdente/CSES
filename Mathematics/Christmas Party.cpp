//Count derangement numbers.
//https://www.geeksforgeeks.org/count-derangements-permutation-such-that-no-element-appears-in-its-original-position/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 1e6+5;
#define ll long long
 
 
int der[mx];
 
int cntder(int n)
{
	der[0]=1;
	der[1]=0;
	der[2]=1;
	for(int i=3;i<=n;++i)
	{
		der[i]=((i-1)*1ll*(der[i-1]+der[i-2]))%mod;
	}
	return der[n];
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;cin>>n;
    cout<<cntder(n)<<endl;
	return 0;
}
