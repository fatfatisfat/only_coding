#include <bits/stdc++.h>
using namespace std;

string solution(string s){
    int len = s.length();
    string next_s = "";
    for (int i=0; i<len; i++){
        int count = 1;
        while (i + 1 < len && s[i] == s[i+1]){
            count++;
            i++;
        }
        next_s += to_string(count);
        next_s += s[i];
    }
    return next_s;
}

int main(){
    int n;
    while (cin >> n){
        if (n == -1) break;
        string cur = "1";
        for (int i=0; i<n; i++){
            cur = solution(cur);
        }
        cout << cur << endl;
    }
    return 0;
}