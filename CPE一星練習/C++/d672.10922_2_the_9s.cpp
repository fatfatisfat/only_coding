#include <bits/stdc++.h>
using namespace std;

int degree(string n){

    int sum = 0;
    for (char c : n){
        sum += c - '0';
    }
    if (sum % 9 == 0){
        if (sum == 9) return 1;
        else return 1 + degree(to_string(sum));
    }
    return 0;
}

void solve(){
    string n;
    while (cin >> n){
        if (n == "0") break;
        int count = degree(n);
        if (count == 0) cout << n << " is not a multiple of 9.\n";
        else cout << n << " is a multiple of 9 and has 9-degree " << count << ".\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}