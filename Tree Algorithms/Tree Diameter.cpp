//https://cses.fi/problemset/task/1131/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<vector<int>>adj;
vector<bool>visited;

void Malena(){
	int n;cin>>n;
	if(n==1){
		cout<<0<<'\n';return;
	}
	adj.resize(n+1);
	visited.resize(n+1);
	int mx_dis=0,y=-1;
	function<void(int,int)>dfs=[&](int u,int dis)->void{
		visited[u]=true;
		if(dis>mx_dis){
			mx_dis=dis;
			y=u;
		}
		for(auto v:adj[u]){
			if(!visited[v]){
				dfs(v,dis+1);
			}
		}
	};
	for(int i=0;i<n-1;++i){
		int u,v;cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0);
	for(int i=1;i<=n;++i)visited[i]=false;
	dfs(y,0);
	cout<<mx_dis<<'\n';
	
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
