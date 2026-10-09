#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    bool flip1 = true;
    bool flip2 = true;
    while (getline(cin, s)){
        string ans = "";
        int len = s.length();
        for (int i=0; i<len; i++){
            char c = s[i];
            if (c == '"'){
                if (flip1){
                    ans += "``";
                    flip1 = false;
                }else {
                    ans += "''";
                    flip1 = true;
                }
            }else {
                ans += c;
            }
        }
        cout << ans << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}