#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    if (n >= 2) ans += (n / 2) * m;
    if (n % 2 == 1) ans += m / 2;
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

/*
0 0 0
0 0 0
0 0 0

0 0 0 0
0 0 0 0

0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0
*/