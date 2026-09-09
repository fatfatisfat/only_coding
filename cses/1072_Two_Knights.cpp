#include <bits/stdc++.h>
#define int long long
using namespace std;

long long cc(int n){
    cout << "n " << n << '\n';
    n *= n;
    int m = 2;
    if (m > n) return 0;
    if (n == m) return 1;

    long long res = 1;
    for (int i=1; i<=m; i++){
        res = res * (n - i + 1) / i;
    }
    return res;
}

signed main(){
    int n;
    cin >> n;
    cout << 0 << '\n';
    for (int i=2; i<=n; i++){
        int neg = (i/2) * (i/3) * 2;
        int ans = cc(i);
        cout << "cc " << ans << '\n';
        ans -= neg;
        cout << ans << '\n';
    }
}

