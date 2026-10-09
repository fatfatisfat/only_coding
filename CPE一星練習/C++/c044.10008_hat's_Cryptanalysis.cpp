#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin >> t;
    cin.ignore();
    vector<int> arr(26, 0);
    while (t--){
        string s;
        getline(cin, s);
        for (char c : s){
            int n = -1;
            if (c >= 'a' && c <= 'z'){
                n = c - 'a';
            }else if (c >= 'A' && c <= 'Z'){
                n = c - 'A';
            }
            if (n != -1) arr[n]++;
        }
    }
    vector<pair<char, int>> letter;
    for (int i=0; i<26; i++){
        letter.push_back({'A' + i, arr[i]});
    }
    sort(letter.begin(), letter.end(), [](auto a, auto b){
        if (a.second == b.second) return a.first < b.first;
        else return a.second > b.second;
    });
    for (int i=0; i<26; i++){
        if (letter[i].second == 0) break;
        cout << letter[i].first << " " << letter[i].second << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}