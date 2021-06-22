//https://cses.fi/problemset/task/2193/

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

//Pick's theorem
//Polygon area,A= i(points inside polygon) + b(points on boundary)/2.0 - 1

void Malena(){
	int n;cin>>n;
	vector<Point>Polygon(n);
	for(Point &p:Polygon){
		p.read();
	}
	int point_inside=0,point_boundary=0;
	for(int i=0;i<n;++i){
		Point dif=Polygon[(i+1)%n]-Polygon[i];
		point_boundary+=__gcd(abs(dif.x),abs(dif.y));
	}
	int area=0;
	for(int i=0;i<n;++i){
		area+=Polygon[i]*Polygon[(i+1)%n];
	}
	int A=abs(area);
	point_inside= (A + 2 - point_boundary)/2;
	cout<<point_inside<<" "<<point_boundary<<'\n';	
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
