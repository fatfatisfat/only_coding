#include <bits/stdc++.h>
using namespace std;

void solve(){
    int s;
    long long d;
    while (cin >> s >> d){
        while (d > 0){
            d -= s;
            s++;
        }
        s--;
        cout << s << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

