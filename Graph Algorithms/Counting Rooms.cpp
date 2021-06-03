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
	int h,w;cin>>h>>w;
	vector<vector<char>>grid(h,vector<char>(w));
	for(int i=0;i<h;++i){
		for(int j=0;j<w;++j){
			cin>>grid[i][j];
		}
	}
	auto inside =[&](int row,int col){
        return 0<=row and row<h and 0<=col and col<w;
    };
    
	vector<pair<int,int>>directions{{1,0},{0,1},{-1,0},{0,-1}};
	vector<vector<bool>>visited(h,vector<bool>(w));
 
	int cnt=0;
	for(int row=0;row<h;++row){
		for(int col=0;col<w;++col){
			if(!visited[row][col] and grid[row][col]=='.'){
				cnt++;
				visited[row][col]=true;
				queue<pair<int,int>>q;
				q.push({row,col});
				while(!q.empty()){
					pair<int,int>p=q.front();
					q.pop();
					for(pair<int,int>dir:directions){
						int new_row=p.first+dir.first;
						int new_col=p.second+dir.second;
						if(inside(new_row,new_col) and !visited[new_row][new_col] and grid[new_row][new_col]=='.'){
							visited[new_row][new_col]=true;
							q.push({new_row,new_col});
						}
					}
				}
			}
		}
	}
	cout<<cnt;
	
	return 0;
}
