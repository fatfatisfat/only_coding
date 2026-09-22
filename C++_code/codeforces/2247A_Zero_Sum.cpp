#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i=0; i<n; i++){
        int num;
        cin >> num;
        sum += num;
    }
    if (n % 2 == 1) cout << "NO\n";
    else {
        if (sum % 4 == 0){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}