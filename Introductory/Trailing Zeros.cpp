/*
For counting trailing zeroes we need to find
higest power of 10 that divides the n!
-> 2400000 = 24 * 10 ^ 5 (ans is 5 which is highest power of 10)
 
Here, the prime factors of 10 = 2, 5
So, we need to find the minimum factors of 2 or 5
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
 
void malena(){
    int n; cin >> n;
    // Legendre's theorem
    // gives highest prime factor divides n!
    auto legendre = [&] (int n, int p) -> int {
        int ans = 0;
        while (n) {
            ans += n / p;
            n /= p;
        }
        return ans;
    };
 
    int a = legendre(n, 2), b = legendre(n, 5);
    cout << min(a, b) << '\n';
}
 
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    int t, c = 0;
    t = 1;
    // cin >> t;
    while(t--) {
        // cout << "Case " << ++c <<": ";
        malena();
    }
    return 0;
}
