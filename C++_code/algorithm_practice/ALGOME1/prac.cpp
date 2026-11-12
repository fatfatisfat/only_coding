#include <bits/stdc++.h>
using namespace std;

vector<bool> primes(2002, true);
void do_primes(){
    primes[0] = false;
    primes[1] = false;
    for (int i=2; i<=2001; i++){
        if (primes[i]){
            for (int j=i*i; j<=2001; j+=i){
                primes[j] = false;
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
    string ans = "";
    for (const auto& [key, value] : arr){
        if (primes[value]) ans += key;
    }
    if (ans.empty()){
        cout << "empty\n";
    }else {
        cout << ans << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    do_primes();
    for (int i=1; i<=n; i++){
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}