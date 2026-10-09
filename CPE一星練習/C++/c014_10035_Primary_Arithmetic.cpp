#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0) break;
        int carry = 0;
        int count = 0;
        while (a > 0 || b > 0){
            int n1 = a % 10, n2 = b % 10;
            int sum = n1 + n2 + carry;
            if (sum >= 10) count++;
            carry = sum / 10;
            a /= 10;
            b /= 10;
        }
        if (count == 0) cout << "No carry operation.\n";
        else if (count == 1) cout << 1 << " carry operation.\n";
        else cout << count << " carry operations.\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}