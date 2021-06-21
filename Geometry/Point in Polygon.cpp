//https://cses.fi/problemset/task/2192/
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

bool intersect (Point p1,Point q1, Point p2,Point q2){
	//two segments are parallel...
	//Then their cross product is zero
	if((q1-p1) * (q2-p2)==0){
		if(p1.triangle(p2,q1)!=0){
			return false;
		}
		for(int i=0;i<2;++i){
			//checks the two bounding boxes intersect ...
			if(max(p1.x,q1.x)<min(p2.x,q2.x) or max(p1.y,q1.y)<min(p2.y,q2.y)){
				return false;
			}
			swap(p1,p2);
			swap(q1,q2);
		}
		return true;
	}else{
		for(int i=0;i<2;++i){
			int sign1=p1.triangle(q1,p2);//if sign1(-ve) w.r.t p1 , point q1 is on the left of p2 or vice-versa.
			int sign2=p1.triangle(q1,q2);//if sign2(+ve) w.r.t p1 , point q1 is on the right of q2 or vice-versa.
			if((sign1<0 and sign2<0) or (sign1>0 and sign2>0)){
				return false;
			}
			swap(p1,p2);
			swap(q1,q2);
		}
		return true;
	}
}

bool is_on_boundary(Point a,Point b,Point c){
	if(a.triangle(b,c)!=0){
		return false;
	}
	return min(a.x,b.x)<=c.x and c.x<=max(a.x,b.x) and
		   min(a.y,b.y)<=c.y and c.y<=max(a.y,b.y);
}

void Malena(){
	int n,m;cin>>n>>m;
	vector<Point>Polygon(n);
	for(Point &p:Polygon){
		p.read();
	}
	while(m--){
		Point first;
		first.read();
		Point second=Point{first.x+1,(int)(2e9+1)};
		int cnt=0;
		bool flag=false;
		for(int i=0;i<n;++i){
			int j=(i==n-1?0:i+1);
			if(is_on_boundary(Polygon[i],Polygon[j],first)){
				flag=true;break;
			}
			if(intersect(first,second,Polygon[i],Polygon[j]))cnt++;
		}
		if(flag){
			cout<<"BOUNDARY\n";continue;
		}
		if(cnt&1)cout<<"INSIDE";
		else cout<<"OUTSIDE";
		cout<<'\n';
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
	//cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
