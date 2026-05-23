#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    cin >> line;
    int sum = 0, count = 1;
    for (char c: line){
        if (c == 'O')sum += count++;
        else count = 1;
    }
    cout << sum << "\n";
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solve();
    }
}