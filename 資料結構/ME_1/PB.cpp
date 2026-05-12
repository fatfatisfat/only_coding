#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    string ans;
    int len = (int)s.length() - 1;
    while (len >= 0){
        int n = s[len] - '0';
        if (n + 1 == 10){
            ans = "0" + ans;
            if (len == 0) ans = "1" + ans;
            len--;
        }else {
            ans = to_string(++n) + ans;
            len--;
            break;
        }
    }
    while (len >= 0){
        ans = s[len] + ans;
        len--;
    }
    cout << ans << endl;
    return;
}

int main(){
    string s;
    while (cin >> s){
        if (s[0] == '-') break;
        solve(s);
    }
    return 0;
}