#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    int mod = (1e9 + 7);
    int ans = 1, base = 2, exp = n;
    while (exp > 0){
        if (exp % 2 == 1){
            ans = ans * base % mod;
        }
        base  = base * base % mod;
        exp /= 2;
    }
    cout << ans;
}