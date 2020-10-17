#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  
  for(int i=1;i<=n;++i)
  {
  	ll a=1ll*i*i*(i*i-1)/2;
  	ll b=1ll*2*(i-2)*(2*(i-4)+6);
  	cout<<a-b<<endl;
  }
  return 0;
}
