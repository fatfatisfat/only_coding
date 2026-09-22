#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, m, a;
    cin >> n >> m >> a;
    int row, col;
    if (n % a == 0) row = n / a;
    else row = n / a + 1;
    if (m % a == 0) col = m / a;
    else col = m / a + 1;
    int ans = row * col;
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}