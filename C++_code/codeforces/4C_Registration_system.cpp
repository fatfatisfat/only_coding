#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<string, int> arr;
    while (n--){
        string s;
        cin >> s;
        auto f = arr.find(s);
        if (f != arr.end()){
            cout << s << f->second << "\n";
            f->second++;
        }else {
            cout << "OK" << "\n";
            arr[s] = 1;
        }
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}