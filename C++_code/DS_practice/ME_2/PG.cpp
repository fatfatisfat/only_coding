#include <bits/stdc++.h>
using namespace std;

int search(int sub_root, const vector<int> tree, int cur){
    if (tree[cur] != sub_root){
        
    }
}

void solve(){
    string line, s;
    getline(cin, line);
    stringstream ss1(line);
    vector<int> tree;
    vector<int> sub_tree;
    while (ss1 >> s){
        tree.push_back(stoi(s));
    }
    getline(cin, line);
    stringstream ss2(line);
    while (ss2 >> s){
        sub_tree.push_back(stoi(s));
    }
    int sub_root = sub_tree[0];
 
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
}