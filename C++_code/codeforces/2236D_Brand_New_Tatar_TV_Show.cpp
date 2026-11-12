#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<bool> dp(n, false);
    int n_false = n;
    int ptr = n - 1;
    for (int i=n-1; i>=0; i--){
        while (ptr > i && arr[ptr] > arr[i] + k){
            ptr--;
        }
        
    }
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