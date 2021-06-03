//Bipartite coloring problem
#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
vector<bool>visited;
vector<vector<int>>graph;
vector<int>colors;
bool flag=true;
void dfs(int u,int c){
	visited[u]=true;
	colors[u]=c;
	for(auto v:graph[u]){
		if(colors[u]==colors[v])flag=false;
		if(!visited[v]){
			dfs(v,(colors[u]^3));
		}
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
	colors.resize(n+1);
	for(int i=1;i<=n;++i){
		if(!visited[i]){
			dfs(i,1);
		}
	}
	if(!flag)return cout<<"IMPOSSIBLE\n",0;
	for(int i=1;i<=n;++i){
		cout<<colors[i]<<' ';
	}
	cout<<'\n';
 
	
	return 0;
}
