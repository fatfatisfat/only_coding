#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while (getline(cin, s)){
        if (s.empty()) break;
        int n = s.length();
        unordered_set<string> seen;
        string doubled = s + s;
        string cur;
        bool first = true;
        for (int j=0; j<n; j++){
            cur = doubled.substr(j, n);        
            if (seen.find(cur) == seen.end()){
            if (!first) cout << " ";
            cout << cur;
            seen.insert(cur);
            first = false;
            }
        }
        cout << "\n";
    }
    return 0;
}