#include <bits/stdc++.h>
using namespace std;

int count_permutation(string s, vector<bool> used){
    int count = 0;
    bool is_leaf = true;

    for (int i=0; i<s.length(); i++){
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

        is_leaf = false;
        used[i] = true;
        count += count_permutation(s, used);
        used[i] = false;
    }
    return (is_leaf) ? 1 : count;
}

void solve(vector<bool> used, string s, string ans){
    if (ans.length() == s.length()){
        cout << ans << '\n';
        return;
    }
    
    for (int i=0; i<s.length(); i++){
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

        used[i] = true;
        solve(used, s, ans + s[i]);
        used[i] = false;
    }
}

int main(){
    string s;
    cin >> s;
    int n = s.length();
    sort(s.begin(), s.end());
    vector<bool> used(n, false);
    int ans = count_permutation(s, used);
    cout << ans << '\n';
    solve(used, s, "");
    return 0;
}