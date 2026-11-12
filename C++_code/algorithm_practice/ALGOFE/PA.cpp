#include <bits/stdc++.h>
using namespace std;

void solve(){
    int i, j;
    while (cin >> i >> j){
        int MAX = 0;
        if (i > j){
            for (int k=j; k<=i; k++){
                int cur = k;
                int count = 1;
                while (cur > 1){
                    if (cur % 2 == 0) cur /= 2;
                    else cur = 3 * cur + 1;
                    count++;
                }
                MAX = max(MAX, count);
            }
        }else {
            for (int k=i; k<=j; k++){
                int cur = k;
                int count = 1;
                while (cur > 1){
                    if (cur % 2 == 0) cur /= 2;
                    else cur = 3 * cur + 1;
                    count++;
                }
                MAX = max(MAX, count);
            }
        }
        
        cout << i << " " << j << " " << MAX << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}