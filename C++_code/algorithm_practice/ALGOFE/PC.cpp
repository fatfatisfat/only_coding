#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> dp(95, 0);

void fill(){
    dp[0] = 1;
    dp[1] = 1;
    for (int i=2; i<=90; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return;
}

void solve(int n){
    cout << dp[n] << "\n";
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill();
    int n;
    while(cin >> n){
        if (n == 0) break;
        solve(n);
    }
    return 0;
}
/*
1
11 2
111 12 21
1111 112 121 211 22
11111 1112 1121 1211 2111 122 212 221
*/