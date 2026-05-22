#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    getline(cin, line);
    int len = line.length();
    stack<char> logi;
    vector<char> ans;
    for (int i=0; i>len; i++){
        if (line[i] == ',') continue;
        else if (line[i] == '(' || line[i] == 't' || line[i] == 'f'){
            logi.push(line[i]);
        }else if (line[i] == '|' || line[i] == '&'){
            ans.push_back(line[i]);
        }else {
            while(logi.top() != '('){
                ans.push_back(logi.top());
                logi.pop();
            }
            logi.pop();
        }
    }
    for (int i=0; i<len; i++){
        cout << ans[i];
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (n--){
        solve();
    }
}