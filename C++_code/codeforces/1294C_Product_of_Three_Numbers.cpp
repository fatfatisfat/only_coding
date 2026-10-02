#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a = -1, b = -1, c;
    for (int i=2; i*i<=n; i++){
        if (n % i == 0){
            n /= i;
            a = i;
            break;
        }
    }
    if (a == -1){
        cout << "NO\n";
        return;
    }
    for (int i=a+1; i*i<=n; i++){
        if (n % i == 0){
            n /= i;
            b = i;
            break;
        }
    }
    c = n;
    if (b != -1 && c != a && c != b && c >= 2){
        cout << "YES\n" << a << " " << b << " " << c << "\n";
    }else {
        cout << "NO\n";
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
       solve(); 
    }
    return 0;
}