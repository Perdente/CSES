// Dijsktra's Algorithm
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define p pair<int,int>
void Malena(){
	int n,m;cin>>n>>m;
	vector<p>edge[n+1];
	vector<int> dist(n+1, LLONG_MAX);
	for(int i=0;i<m;++i){
		int u,v,w;cin>>u>>v>>w;
		edge[u].push_back({w,v});
		//edge[v].push_back({w,u});
	}
	priority_queue<p,vector<p>,greater<p>> pq;
	pq.push({0,1});// first value is cost, second value is node
	dist[1]=0;
 	vector<bool>vis(n+1);
	while(!pq.empty()){
		int cost=pq.top().first,node=pq.top().second;
		pq.pop();
		if(vis[node])continue;
		vis[node]=true;
		for(auto pr:edge[node]){
			if(pr.first+cost<dist[pr.second]){
				dist[pr.second]=pr.first+cost;
				pq.push({dist[pr.second],pr.second});
			}
		}
	}
	for(int i=1;i<=n;++i)cout<<dist[i]<<" ";
		cout<<endl;
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


/*
priority_queue<p,vector<p>,greater<p>> pq;
pq.push({0,1});// first value is cost, second value is node
dist[1]=0;
while(!pq.empty()){
  int u=pq.top().second;
  pq.pop();
  if(vis[u])continue;
  vis[u]=true;
  for(auto [w,v]:edge[u]){
    if(dist[u]+w<dist[v]){
      dist[v]=dist[u]+w;
      pq.push({dist[v],v});
    }
  }
}
*/
