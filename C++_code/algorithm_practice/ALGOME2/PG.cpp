#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int t;
    while (cin >> t){
        while (t--){
            string s;
            cin >> s;
            bool AND_gate = true;
            int ans = 0;
            while (s.length() >= 3){
                int len = s.length();
                string num = s.substr(len - 3, 3);
                s.erase(len - 3, 3);
                if (AND_gate) ans += (int)stoi(num);
                else ans -= (int)stoi(num);
                AND_gate = !AND_gate;
            }
            if (s.length() != 0){
                if (AND_gate) ans += (int)stoi(s);
                else ans -= (int)stoi(s);
            }
            ans = abs(ans);
            if (ans % 13 == 0){
                cout << ans << " YES\n";
            }else {
                cout << ans << " NO\n";
            }
        }
        
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}