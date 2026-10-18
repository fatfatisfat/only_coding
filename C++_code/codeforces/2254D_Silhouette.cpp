#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<ll> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    
    if (sorted_arr[0] != 0){
        cout << -1 << "\n";
        return;
    }
    vector<pair<ll, ll>> freq;
    for (ll val : sorted_arr) {
        if (freq.empty() || freq.back().first != val) {
            freq.push_back({val, 1});
        } else {
            freq.back().second++;
        }
    }
    
    vector<ll> u(freq.size());
    ll last = 0;
    
    for (int i = 0; i < (int)freq.size() - 1; i++) {
        ll a = freq[i].first, b = freq[i + 1].first, c = freq[i].second;
        if ((b - a) % c != 0) {
            cout << -1 << "\n";
            return;
        }
        
        ll current_u = (b - a) / c;
        if (current_u <= last) {
            cout << -1 << "\n";
            return;
        }
        u[i] = current_u;
        last = current_u;
    }

    if (freq.size() == 1) {
        u[0] = 1;
    } else {
        u.back() = last + 1;
    }
    vector<ll> distinct_vals(freq.size());
    for (int i = 0; i < freq.size(); i++) {
        distinct_vals[i] = freq[i].first;
    }
    for (int i = 0; i < n; i++) {
        int idx = lower_bound(distinct_vals.begin(), distinct_vals.end(), arr[i]) - distinct_vals.begin();
        cout << u[idx] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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