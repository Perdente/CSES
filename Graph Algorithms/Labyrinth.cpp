//Traverse in a bfs grid
#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int h,w,stx,sty,enx,eny;cin>>h>>w;
	
	vector<pair<int,int>>directions{{1,0},{0,1},{-1,0},{0,-1}};
	vector<vector<bool>>visited(h,vector<bool>(w));
 	vector<vector<pair<int,int>>>path;
 	path.resize(h);
 	for(int i=0;i<h;++i)path[i].resize(w);
	
	for(int i=0;i<h;++i){
		for(int j=0;j<w;++j){
			path[i][j]={-1,-1};
			char ch;cin>>ch;
			if(ch=='#')visited[i][j]=true;
			if(ch=='A')stx=i,sty=j;
			if(ch=='B')enx=i,eny=j;
		}
	}
	auto inside =[&](int row,int col){
        return 0<=row and row<h and 0<=col and col<w;
    };
    
	queue<pair<int,int>>q;
	q.push({stx,sty});
	while(!q.empty()){
		pair<int,int>p=q.front();
		q.pop();
		for(pair<int,int>dir:directions){
			int new_row=p.first+dir.first;
			int new_col=p.second+dir.second;
			if(inside(new_row,new_col) and !visited[new_row][new_col]){
				visited[new_row][new_col]=true;
				q.push({new_row,new_col});
				path[new_row][new_col]={dir.first,dir.second};
			}
		}
	}
	if(!visited[enx][eny])return cout<<"NO\n",0;
	cout<<"YES\n";
	vector<pair<int,int>>ans;
	pair<int,int>end={enx,eny};
	while(end.first!=stx or end.second!=sty){
		ans.push_back(path[end.first][end.second]);
		end.first-=ans.back().first;
		end.second-=ans.back().second;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans.size()<<'\n';
	for(auto i:ans){
		if(i.first==1 and i.second==0)cout<<'D';
		else if(i.first==0 and i.second==1)cout<<'R';
		else if(i.first==-1 and i.second==0)cout<<'U';
		else cout<<'L';
	}
	return 0;
}
