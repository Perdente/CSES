// Input:
// 5
// 1 1 2 3

// Output:
// 4 1 1 0 0

#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void Malena(){
	int n;cin>>n;
	vector<vector<int>>tree(n+1);
	vector<int>ans(n+1);
	for(int i=2;i<=n;++i){
		int x;cin>>x;
		tree[x].push_back(i);
		tree[i].push_back(x);
	}
	function<void(int,int)>solve=[&](int u,int par)->void{
		int subords=0;
		for(auto v:tree[u]){
			if(v!=par){
				solve(v,u);
				subords+=1+ans[v];
			}
		}
		ans[u]=subords;// subordinates of u = subordinates of v + 1(the node v) 
	};
	solve(1,0);
	for(int i=1;i<=n;++i)
		cout<<ans[i]<<" ";
	cout<<'\n';
}
 
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	t=1;
	//cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
