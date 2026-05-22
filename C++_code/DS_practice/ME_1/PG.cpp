#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    getline(cin, line);
    int len = line.length();
    stack<char> logi;
    for (int i=0; i<len; i++){
        if (line[i] == ',') continue;
        else if (line[i] != ')'){
            logi.push(line[i]);
        }else {
            vector<char> val;
            while (!logi.empty() && logi.top() != '('){
                val.push_back(logi.top());
                logi.pop();
            }
            if (!logi.empty()) logi.pop();
            char op = logi.top();
            logi.pop();
            char res;
            if (op == '!'){
                res = (val[0] == 't') ? 'f' : 't';
            }else if (op == '&'){
                res = 't';
                for (char c : val){
                    if (c == 'f'){
                        res = 'f';
                        break;
                    }
                }
            }else if (op == '|'){
                res = 'f';
                for (char c : val){
                    if (c == 't'){
                        res = 't';
                        break;
                    }
                }
            }
            logi.push(res);
        }
    }
    cout << (char)toupper(logi.top()) << endl;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (n--){
        solve();
    }
}