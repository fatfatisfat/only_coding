#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    string name;
    cin >> name;
    map<char, int> arr;
    for (char c : name){
        arr[c] = 1;
    }
    if (arr.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}