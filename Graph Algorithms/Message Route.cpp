//Single source shortest path
//using basic bfs
#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<bool>visited;
vector<vector<int>>graph;
vector<int>parent;
 
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
	parent.resize(n+1,-1);
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	queue<int>q;
	q.push(1);
	visited[1]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto v:graph[u]){
			if(!visited[v]){
				visited[v]=true;
				parent[v]=u;
				q.push(v);
			}
		}
	}
	if(parent[n]==-1)return cout<<"IMPOSSIBLE\n",0;
	// for(auto i:parent){
	// 	cout<<i<<" ";
	// }
	int x=n;
	stack<int>path;
	while(x!=-1){
		path.push(x);
		x=parent[x];	
	}
	cout<<path.size()<<'\n';
	while(!path.empty()){
		cout<<path.top()<<' ';
		path.pop();
	}
	
	return 0;
}
