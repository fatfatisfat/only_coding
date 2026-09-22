#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    for (int i=0; i<s1.length(); i++){
        char c1 = s1[i], c2 = s2[i];
        c1 = tolower(c1);
        c2 = tolower(c2);
        
        if (c1 > c2){
            cout << 1;
            return;
        } 
        else if (c1 < c2){
            cout << -1;
            return;
        } 
    }
    cout << 0;
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}