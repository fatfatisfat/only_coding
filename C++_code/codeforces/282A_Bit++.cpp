#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int ans = 0;
    while (t--){
        string s;
        cin >> s;
        int f = s.find("+");
        if (f != string::npos){
            ans++;
        }else {
            ans--;
        }
    }
    cout << ans;
}