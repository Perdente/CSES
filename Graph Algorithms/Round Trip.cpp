//Bipartite coloring problem
#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
vector<bool>visited;
vector<vector<int>>graph;
vector<int>parent;
int sv,ev;
bool flag=false;
void dfs(int u,int p){
	visited[u]=true;
	parent[u]=p;
	for(auto v:graph[u]){
		if(!visited[v]){
			dfs(v,u);
		}else{
			if(v!=p){
				sv=u,ev=v;
				flag=true;
			}
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
	parent.resize(n+1);
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int cnt=0;
	for(int i=1;i<=n;++i){
		if(!visited[i]){
			dfs(i,-1);
		}
	}
	if(!flag)return cout<<"IMPOSSIBLE\n",0;
	vector<int>path;
	int r=ev;
	path.push_back(ev);
	while(r!=sv){
		r=parent[r];
		path.push_back(r);
	}
	path.push_back(ev);
	cout<<path.size()<<'\n';
	for(auto i:path)cout<<i<<' ';
	cout<<'\n';
 
	
	return 0;
}
