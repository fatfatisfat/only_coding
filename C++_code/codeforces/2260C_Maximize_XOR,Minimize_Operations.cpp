#include <bits/stdc++.h>
using namespace std;

int AND(int sum, int x) {
    int cur_x = 0;
    for (int i = 29; i >= 0; i--) {
        if ((sum >> i) & 1) {
            int c = 1 << i;
            if (cur_x + c <= x) {
                cur_x += c;
            }
        }
    }
    return cur_x;
}

void solve(){
    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        int MIN_AND = AND(sum, x);
        cout << sum << " " << x - MIN_AND << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}