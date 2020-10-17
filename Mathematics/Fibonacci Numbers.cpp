#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 1e8+5;
#define ll long long
 
ll fib[3],I[3][3],T[3][3];
 
void matmul(ll a[3][3],ll b[3][3],ll dim)
{
	ll res[dim+1][dim+1];
	for(int i=0;i<dim;++i)
	{
		for(int j=0;j<dim;++j)
		{
			res[i][j]=0;
			for(int k=0;k<dim;++k)
			{
				res[i][j]=(res[i][j]+a[i][k]*b[k][j])%mod;
			}
		}
	}
	for(int i=0;i<dim;++i)
	{
		for(int j=0;j<dim;++j)
		{
			a[i][j]=res[i][j];
		}
	}
}
 
void nthfib(ll x,ll y,ll z)
{
	I[0][0]=I[1][1]=1;I[0][1]=I[1][0]=0;
	T[0][0]=0;T[0][1]=T[1][0]=T[1][1]=1;
	while(z)
	{
		if(z&1)matmul(I,T,2);
		matmul(T,T,2);
		z>>=1;
	}
	fib[2]=(x*I[0][0]+y*I[0][1])%mod;
	cout<<fib[2]<<endl;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    if(n==0)cout<<0<<endl;
    else if(n==1)cout<<1<<endl;
    else nthfib(0,1,n);
    return 0;
}
