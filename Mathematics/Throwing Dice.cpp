#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define mx 1000005
 
ll T[6][6],I[6][6];
 
void matmul(ll a[6][6],ll b[6][6],int dim)
{
	ll res[dim+1][dim+1];
	for(int i=0;i<dim;++i)
	{
		for(int j=0;j<dim;++j)
		{
			res[i][j]=0;
			for(int k=0;k<dim;++k)
			{
				res[i][j]=(res[i][j]+(a[i][k]*b[k][j])%mod)%mod;
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
 
void nthrec(ll n)
{
	for(int i=0;i<6;++i)
	{
		
		for(int j=0;j<6;++j)
		{
			I[i][j]=0;
			if(i==j)I[i][j]=1;
			else I[i][j]=0;
		}
	}
	for(int i=0;i<6;++i)
	{
		for(int j=0;j<6;++j)
		{
			T[i][j]=0;
			if(i<5)
			{
				T[i][i+1]=1;
			}
			else
			{
				T[i][j]=1;
			}
		}
	}
	while(n)
	{
		if(n&1ll)matmul(I,T,6);
		matmul(T,T,6);
		n>>=1ll;
	}
	cout<<I[5][5]<<endl;
}
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    nthrec(n);
	return 0;
}
