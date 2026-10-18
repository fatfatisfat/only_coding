#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> j(n + 1, -1);
    vector<ll> dp(2 * n + 1, 0);
    for (int i=1; i<=2*n; i++){
        ll temp;
        cin >> temp;
        if (j[temp] == -1) j[temp] = i;
        dp[i] = max(dp[i-1] + 1, dp[j[temp] - 1] + (i - j[temp] + 1) * (i - j[temp] + 1));
    }
    cout << dp[2 * n] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}