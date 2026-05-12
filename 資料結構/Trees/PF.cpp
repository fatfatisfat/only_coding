#include <bits/stdc++.h>
using namespace std;

void solution(vector<char> tree){
    string s;
    getline(cin, s);
    int len = s.length();
    string ans = "";
    if (s[0] == '0' || s[0] == '1'){
        int count = 1;
        for (int i=0; i<len; i++){
            if (s[i] == '0') count = count * 2;
            else if (s[i] == '1') count = count * 2 + 1;
            if (tree[count] >= 'A' && tree[count] <= 'Z'){
                ans += tree[count];
                count = 1;
            }
        }
        cout << ans << endl;
    }else {
        for (int i=0; i<len; i++){
            string temp = "";
            int count;
            for (int j=1; j<(int)tree.size(); j++){
                if (s[i] == tree[j]){
                    count = j;
                    break;
                }
            }
            while (count != 1){
                if (count % 2 == 1) temp = "1" + temp;
                else temp = "0" + temp;
                count /= 2;
            }
            ans += temp;
        }
        cout << ans << endl;
    }
}

int main(){
    string line;
    while (getline(cin, line)){
        stringstream ss(line);
        vector<char> tree;
        tree.push_back('1');
        string s;
        while (ss >> s){
            tree.push_back(s[0]);
        }
        int n;
        cin >> n;
        cin.ignore();
        for (int i=0; i<n; i++){
            solution(tree);
        }
    }
    
}