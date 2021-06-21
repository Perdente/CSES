//https://cses.fi/problemset/task/2190
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
	Point p1,q1,p2,q2;
	p1.read();q1.read();p2.read();q2.read();
 
	//two segments are parallel...
	//Then their cross product is zero
	if((q1-p1) * (q2-p2)==0){
		if(p1.triangle(p2,q1)!=0){cout<<"NO\n";return ;}
		for(int i=0;i<2;++i){
			//checks the two bounding boxes intersect ...
			if(max(p1.x,q1.x)<min(p2.x,q2.x) or max(p1.y,q1.y)<min(p2.y,q2.y)){cout<<"NO\n";return ;}
			swap(p1,p2);
			swap(q1,q2);
		}
		cout<<"YES"<<'\n';
	}else{
		for(int i=0;i<2;++i){
			int sign1=p1.triangle(q1,p2);//if sign1(-ve) w.r.t p1 , point q1 is on the left of p2 or vice-versa.
			int sign2=p1.triangle(q1,q2);//if sign2(+ve) w.r.t p1 , point q1 is on the right of q2 or vice-versa.
			if((sign1<0 and sign2<0) or (sign1>0 and sign2>0)){cout<<"NO\n";return ;}
			swap(p1,p2);
			swap(q1,q2);
		}
		cout<<"YES"<<'\n';
	}
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
