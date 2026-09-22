#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int a, ans;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            cin >> a;
            if (a == 1) ans = abs(2 - i) + abs(2 - j);
        }
    }
    cout << ans;
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}