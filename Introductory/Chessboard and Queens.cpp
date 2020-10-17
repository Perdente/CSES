#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int mx = 2e5+5;
#define ll long long
string board[8];
ll ans=0;
bool colTaken[8],posDiagTaken[16],negDiagTaken[16];
 
void place (int r)
{
	if(r==8)
	{
		ans++;return;
	}
	for(int i=0;i<8;++i)
	{
		if(board[r][i]=='.')
		{
			if(!colTaken[i] and !posDiagTaken[r+i] and !negDiagTaken[r+8-(i+1)])
			{
				colTaken[i]=posDiagTaken[r+i]=negDiagTaken[r+8-(i+1)]=true;
				place(r+1);
				colTaken[i]=posDiagTaken[r+i]=negDiagTaken[r+8-(i+1)]=false;
			}
		}
	}
}
 
int main()
{
    for(int i=0;i<8;++i)getline(cin,board[i]);
    place(0);
    cout<<ans<<endl;
	return 0;
}
