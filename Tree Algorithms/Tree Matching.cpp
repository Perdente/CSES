// input:
// 5
// 1 2
// 1 3
// 3 4
// 3 5
// Output:
// 2
// (1,2),(3,4)
// As the node is visited then we check if it's already matched or not

#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void Malena(){
	int n;cin>>n;
	vector<vector<int>>tree(n+1);
	unordered_set<int>ans;
	for(int i=1;i<=n-1;++i){
		int u,v;cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	function<void(int,int)>solve=[&](int u,int par)->void{

		for(auto v:tree[u]){
			if(v!=par){
				solve(v,u);
				//check while backtracking not before
				if(!ans.count(u) and !ans.count(v)){
					ans.insert(u);
					ans.insert(v);
				}
			}
		}
	};
	solve(1,0);
// 	for(auto it:ans)cout<<it<<" ";
// 		cout<<endl;
	cout<<(int)ans.size()/2<<endl;
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
