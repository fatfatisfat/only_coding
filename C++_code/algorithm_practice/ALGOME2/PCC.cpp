#include <bits/stdc++.h>
using namespace std;

vector<bool> is_prime(2001 + 1, true);

void sieve(){
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i=2; i*i<=2001; i++){
        if (is_prime[i]){
            for (int j=i*i; j<=2001; j+=i){
            is_prime[j] = false;
            }
        }
    }
    return;
}

void solve(){
    string s;
    cin >> s;
    map<char, int> arr;
    for (char c : s){
        arr[c]++;
    }
    bool p = false;
    for (const auto& [key, value] : arr){
        if (is_prime[value]){
            cout << key;
            p = true;
        }
    }
    if (!p) cout << "empty";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin >> t;
    for (int i=1; i<=t; i++){
        if (i > 1) cout << "\n";
        cout << "Case " << i << ": ";
        solve();
    }
}