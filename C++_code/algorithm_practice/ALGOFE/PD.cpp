#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    while (cin >> n){
        if (n < 0) break;
        if (n % 7 == 0){
            cout << "Hello World!\n";
        }else if (n % 7 % 2 == 1){
            for (int i=0; i<2; i++){
                cout << "Hello World!\n";
            }
        }else if (n % 7 % 2 == 0){
            for (int i=0; i<3; i++){
                cout << "Hello World!\n";
            }
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