//https://cses.fi/problemset/task/2189
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
	Point a,b,c;
	a.read();b.read();c.read();
	if(a.triangle(b,c)<0)cout<<"RIGHT";
	else if(a.triangle(b,c)>0)cout<<"LEFT";
	else cout<<"TOUCH";
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
	cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
