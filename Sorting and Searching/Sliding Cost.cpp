#include<bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
using namespace std;
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	ll n,m;cin>>n>>m;
   	ll a[n];
   	for(int i=0;i<n;++i)
   	{
   		cin>>a[i];
	}
	ordered_multiset st;
	for(int i=0;i<m;++i)
	{
		st.insert(a[i]);
	}
	ll P=*st.find_by_order((m+1)/2-1);
	ll d=0;
	for(int i=0;i<m;++i)d+=abs(a[i]-P);
	cout<<d<<" ";
	for(int i=0;i<n-m;++i)
	{
		st.erase(st.find_by_order(st.order_of_key(a[i])));
		st.insert(a[i+m]);
		ll p=*st.find_by_order((m+1)/2-1);
		d+=abs(p-a[i+m])-abs(P-a[i]);
		if(!(m&1))d-=p-P;
		P=p;
		cout<<d<<" ";
	}
	return 0;
}
