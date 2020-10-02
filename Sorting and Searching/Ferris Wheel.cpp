/*Every winner is a loser he just tried one last time*/
 
#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
const long long mx  = 1e5+5;
 
#define inf 			9e18
#define zero 			-9e18
#define PI   			acos(-1.0)  // 3.1415926535897932
#define Case(J) 		printf("Case %lld: %lld\n",++count,J); ///print case
#define max3(a,b,c) 		max(a,max(b,c))
#define min3(a,b,c) 		min(a,min(b,c))
#define GCD(a,b) 		__gcd(a,b)
#define LCM(a,b) 		(a*(b/__gcd(a,b) ))
#define MP 			make_pair
#define pb 			push_back
#define ppb 			pop_back()
#define pf 			push_front
#define ppf 			pop_front()
#define rev(v) 			reverse(v.begin(),v.end());
#define srt(v) 			sort(v.begin(),v.end());
#define grtsrt(v) 		sort(v.begin(),v.end(),greater<ll>());
#define hellyeah 		exit(0);
#define file 			freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define vmax(V) 		*max_element(V.begin(),V.end());
#define vmin(V) 		*min_element(V.begin(),V.end());
#define	debug(a) 		cout<<"*"<<a<<"$"<<endl;
#define	debug2(a,b) 		cout<<"$"<<a<<" "<<b<<"$"<<endl;
#define	debug3(a,b,c) 		cout<<"$"<<a<<" "<<b<<" "<<c<<"$"<<endl;
#define SET(X,D_type)		memset(X, D_type, sizeof(X))
#define groot(A)		{cout<<A<<endl;return;}
#define vins(V)			srt(V)V.resize(unique(V.begin(),V.end())-V.begin());
#define check           	cout<<"Avengers Assemble"<<endl;
#define	lol 			cout<<endl;
#define meem(X) 		cout<<(X?"Yes":"No")<<endl;
#define joker(V) 		for(auto X:V)cout<<X<<" ";cout<<endl;
#define papiya(Mp) 		for(auto X:Mp)cout<<X.first<<" "<<X.second<<endl;
#define lp(i,a) 		for(ll i=0; i<a;i++)
#define lp1(i,a,b) 		for(ll i=a; i<=b;i++)
#define rlp(i,b,a) 		for(ll i=(b);i>=(a);--i) 
#define Mat(mat,N,M)		lp(i,N){lp(j,M)cout<<mat[i][j]<<" \n"[j==M-1];}
typedef long long ll;
void Loser(){ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
ll fact(ll N){return (N<=1ll?1ll:N*fact(N-1ll));}
long long ceil(ll A,ll B){if(A%B==0)return A/B;else return (A/B)+1ll;}
long long middle(ll a, ll b, ll c) { if ((a <= b && b <= c) || (c <= b && b <= a)) return b;else if ((b <= a && a <= c) || (c <= a && a <= b))return a;else return c; } 
bool ispalindrom(string s) {transform(s.begin(),s.end(),s.begin(),::tolower);return (s[0]==s[s.size()-1]?1:0);}
//sort(v.begin(),v.end(),as_second);
bool as_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return (a.second < b.second); }//sort the vector pair in assending order according to second element
bool ds_first(const pair<ll,ll> &a, const pair<ll,ll> &b){ return (a.first > b.first);}//sort the vector pair in decending order according to first element
bool ds_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return a.second>b.second;}//sort the vector pair in decending order according to second element
 
/*max element in map*/
template<typename KeyType, typename ValueType> //auto max=get_max(x);
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {//std::cout << max.first << "=>" << max.second << std::endl;  //set->max:m=*a.rbegin();min:mi=*a.begin();
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;//min->p1.second>p2.second
  });
}
 
typedef deque<ll> Dq;
typedef set<ll> St;
typedef map<ll,ll> M;
typedef vector<ll> V;
typedef vector<V> VV;
typedef vector<pair<ll,ll>> VP;
string str,str1,str2,str3,str4,str5,str6,str7;
char ch,ch1,ch2,ch3;
bool flag,flag1,flag2;
 
long long a,b,c,d,e,f,g,h,l,i,j,k,m,n,o,p,q,r,s,t,u,v,w,x,y,z,test,cnt,cnt1,cnt2,cnt3,cnt4,sum,sum1,sum2,sum3,ans,ans1,ans2,ans3,ma,ma1,ma2,ma3,mi,mi1,mi2,mi3,temp,temp1,temp2,temp3,temp4;
//long double a,b,c,d,e,f,g,h,l,i,j,k,m,n,o,p,q,r,s,t,u,v,w,x,y,z,cnt,cnt1,cnt2,cnt3,cnt4,sum,sum1,sum2,sum3,ans,ans1,ans2,ans3,ma,ma1,ma2,ma3,mi,mi1,mi2,mi3,temp,temp1,temp2,temp3,temp4;
 
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
 
void SectumSempra()
{
	cin>>n>>m;
	V v(n);
	lp(i,n)cin>>v[i];
	cnt=n,sum=0,c=0;
	srt(v);
	i=0,j=n-1;
	while(i<j)
	{
		if(v[i]+v[j]<=m)cnt--,i++,j--;
		else j--;
	}
	cout<<cnt<<endl;
}
 
int main()
{
	Loser();
	test=1;
	//cin>>test;
	while(test--)
	{
		SectumSempra();
	}
	return 0;
}
