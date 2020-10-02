#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
using namespace std;
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   	int n,m;cin>>n>>m;
   	int a[n];
   	for(int i=0;i<n;++i)
   	{
   		cin>>a[i];
	}
	ordered_multiset st;
	queue<int>q;
	for(int i=0;i<n;++i)
	{
		if(q.size()==m)
		{
			if(m&1)
			{
				cout<<*(st.find_by_order(m/2))<<" ";
			}
			else cout<<*(st.find_by_order(m/2-1))<<" ";
			int p=q.front();
			st.erase(st.find_by_order(st.order_of_key(p)));
			q.pop();
		}
		q.push(a[i]);
		st.insert(a[i]);
	}
	if(m&1)
	{
		cout<<*(st.find_by_order(m/2))<<" ";
	}
	else
	{
		cout<<*(st.find_by_order(m/2-1))<<" ";	
	}
	return 0;
}
