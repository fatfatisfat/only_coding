#include <bits/stdc++.h>
using namespace std;

void solve(){
    int ans = 0;
    int n, k;
    cin >> n >> k;
    vector<long long> freq;
    long long current_val = -1;
    long long current_count = 0;
    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        if (i == 0) {
            current_val = temp;
            current_count = 1;
        } else if (temp == current_val) {
            current_count++;
        } else {
            freq.push_back(current_count);
            current_val = temp;
            current_count = 1;
        }
    }
    if (current_count > 0) freq.push_back(current_count);

    sort(freq.begin(), freq.end());

    long long ptr = 0;
    long long prev_u = 0;
    int total_t = freq.size();
    while (ptr < total_t){
        int count = 1;
        for (int i=ptr+1; i<total_t; i++){
            if (freq[i] == freq[ptr]) count++;
            else break;
        }
        long long u = freq[ptr];
        long long sur = total_t - ptr;
        long long moves = u - prev_u - 1;
        long long min_len = n - moves * sur;

        if (k >= min_len && (k - min_len) % sur == 0) ans++;
        
        n -= (u - prev_u) * sur;
        prev_u = u;
        ptr += count;

    }
    cout << ans << "\n";
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