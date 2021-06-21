//https://cses.fi/problemset/task/2191/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

struct Point
{
	int x,y;
	void read(){cin>>x>>y;}
	Point operator - (const Point& b)const{
		return Point{x-b.x,y-b.y};
	}
	void operator -=(const Point& b){
		x-=b.x;
		y-=b.y;
	}
	int operator *(const Point& b)const{
		return x*b.y-y*b.x;
	}
	int triangle(const Point& b,const Point& c)const{
		return (b-*this)*(c-*this);
	}
};

void Malena(){
	int n;cin>>n;
	vector<Point>Poligon(n);
	for(auto &p:Poligon){
		p.read();
	}
	int area=0;
	for(int i=0;i<n;++i){
		area+=Poligon[i]*Poligon[(i+1)%n];
	}
	cout<<abs(area);
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
