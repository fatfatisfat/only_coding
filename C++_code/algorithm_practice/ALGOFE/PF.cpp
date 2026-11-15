#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    while (cin >> n){
        if (n == 0) break;
        vector<int> arr(n, 0);
        long long sum = 0;
        int x;
        for(int i=0; i<n; i++){
            cin >> x >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = arr[(n - 1) / 2]; 
        for (int i=0; i<n; i++){
            sum += abs(ans - arr[i]);
        }
        cout << ans << " " << sum << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}