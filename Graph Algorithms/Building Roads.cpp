#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
vector<bool>visited;
vector<vector<int>>graph;
 
void dfs(int u){
	visited[u]=true;
	for(auto v:graph[u]){
		if(!visited[v])dfs(v);
	}
}
 
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;cin>>n>>m;
	graph.resize(n+1);
	visited.resize(n+1);
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int cnt=0;
	vector<int>paths;
	for(int i=1;i<=n;++i){
		if(!visited[i]){
			cnt++;
			paths.push_back(i);
			dfs(i);
		}
	}
	cout<<cnt-1<<'\n';
	int before=paths[0];
	for(int i=1;i<paths.size();++i){
		cout<<before<<" "<<paths[i]<<'\n';
		before=paths[i];
	}
 
	
	return 0;
}
