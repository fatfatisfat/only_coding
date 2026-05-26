#include <bits/stdc++.h>
using namespace std;

int search(int sub_root, const vector<int> tree, int cur){
    if (tree[cur] != sub_root){
        
    }
}

void solve(){
    string line, s;
    getline(cin, line);
    stringstream ss(line);
    vector<int> tree;
    vector<int> sub_tree;
    while (ss >> s){
        tree.push_back(stoi(s));
    }
    getline(cin, line);
    stringstream ss(line);
    while (ss >> s){
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