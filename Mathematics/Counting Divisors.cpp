/*#include<bits/stdc++.h>
#define ll long long
#define mx 1000005
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;cin>>t;
	ll div[mx]={0};
	for(int i=1;i<mx;++i)
	{
		for(int j=i;j<mx;j+=i)
		{
			div[j]++;
		}
	}
	
    while(t--)
    {
    	int n;cin>>n;
    	cout<<div[n]<<endl;
	}
	return 0;
}*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
#define mx 1000005
vector<int>isPrime(mx,-1);
vector<int>Primes;
 
void seive()
{
	for(int i=2;i<=mx;++i)
	{
		if(isPrime[i]==-1)
		{
			for(int j=i;j<=mx;j+=i)
			{
				if(isPrime[j]==-1)
				{
					isPrime[j]=i;
				}
			}
		}
	}
}
 
void getFactorization(int n)
{
	while(n!=1)
	{
		Primes.push_back(isPrime[n]);
		n/=(isPrime[n]);
	}
}
 
int numberOfDivisors(int n)
{
	int sq=sqrt(n);
	int res=1;
	for(int i=0;i<Primes.size() and Primes[i]<=sq;++i)
	{
		if(n%Primes[i]==0)
		{
			int cnt=0;
			while(n%Primes[i]==0)
			{
				n/=Primes[i];
				cnt++;
			}
			sq=sqrt(n);
			cnt++;
			res*=cnt;
		}
	}
	if(n!=1)res*=2;
	return res;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    seive();
	int t;cin>>t;
    while(t--)
    {
    	int n;cin>>n;
    	getFactorization(n);
    	cout<<numberOfDivisors(n)<<endl;
    	Primes.clear();
	}
	return 0;
}
