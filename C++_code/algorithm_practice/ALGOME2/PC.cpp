#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

void is_prime(){
    vector<bool> primes(2001 + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i=2; i<=2001; i++){
        if (primes[i]){
            for (int j=i*i; j<=2001; j+=i){
                primes[j] = false;
            }
        }
    }
    for (int i=0; i<=2001; i++){
        if (primes[i]){
            prime.push_back(i);
        }
    }
}

bool check(int n){
    for (int i=0; i<prime.size(); i++){
        if (n == prime[i]) return true;
    }
    return false;
}

void solve(){
    string s;
    cin >> s;
    map<char, int> arr;
    for (char c : s){
        arr[c]++;
    }
    bool pr = false;
    for (const auto& [letter, value] : arr){
        if (check(value)){
            cout << letter;
            pr = true;
        }
    }
    if (!pr) cout << "empty";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    is_prime();
    for (int i=1; i<=t; i++){
        cout << "Case "<< i <<": ";
        solve();
        cout << "\n";
    }
    return 0;
}