#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    while (s.length() % 3 != 0){
        s = "0" + s;
    }
    int len = s.length();
    long long sum = 0;
    int sign = 1;
    for (int i=len; i>=3; i-=3){
        int start = i - 3;
        int n = stoi(s.substr(start, 3));
        sum += sign * n;
        sign *= -1;
    }
    if (sum % 13 == 0){
        cout << abs(sum) << " YES\n";
    }else {
        cout << abs(sum) << " NO\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
        solve();
    }
    return 0;
}