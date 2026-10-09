#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin >> t;
    string blank;
    getline(cin, blank);
    getline(cin, blank);
    while (t--){
        map<string, double> arr;
        string s;
        int count = 0;
        while (getline(cin, s)){
            if (s == "") break;
            arr[s]++;
            count++;
        }
        for (auto [key, value] : arr){
            cout << key << " " << fixed << setprecision(4) << value / count * 100 << "\n";
        }
        cout << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}