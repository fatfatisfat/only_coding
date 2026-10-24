#include <bits/stdc++.h>
using namespace std;

int MOD = 998244353;

int h(int s){
    for (int i=31; i>=0; i--){
        if ((s >> i) & 1){
            return i;
        }
    }
    return -1;
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int pos_count = 0;
    int s = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] > 0) pos_count++;
        s = s ^ arr[i];
    }
    if (pos_count <= 1){
        cout << 0 << "\n";
        return;
    }
    if (s == 0){
        cout << "1\n";
        return;
    }

    int ans = 0;
    int msb = h(s);

    for (int i=0; i<n; i++){
        if ((arr[i] >> msb) & 1){
            ans++;
        }
    }
    cout << ans % MOD << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}