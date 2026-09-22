#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, l;
    cin >> n >> l;
    vector<double> arr;
    for (int i=0; i<n; i++){
        int locate;
        cin >> locate;
        arr.push_back(locate);
    }
    sort(arr.begin(), arr.end());
    double ans = 0;
    ans = max(ans, arr[0] - 0);
    ans = max(ans, l - arr[arr.size()-1]);
    for (int i=0; i<arr.size()-1; i++){
        ans = max(ans, (arr[i+1] - arr[i]) / 2);
    }
    cout << fixed << setprecision(10) << ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}