#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, ans = "";
    cin >> s;
    
    size_t index = s.find('0');
    if (index != string::npos){
        s.erase(index, 1);
    }

    index = s.find('1');
    if (index != string::npos){
        s.erase(index, 1);
    }
    cout << s << "\n";
    return;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}

/*
110101
11101
1101
1110
*/      