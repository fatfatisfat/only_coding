#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
int search(int sub_root, const vector<int> tree, int cur){
    if (tree[cur] != sub_root){
        
=======
int findroot(const vector<int>tree, int subroot, int loc){
    if (loc < tree.size() && tree[loc] != subroot && tree[loc] != 0){
        int temp;
        temp = findroot(tree, subroot, loc*2+1);
        if (temp != 0) return temp;
        temp = findroot(tree, subroot, loc*2+2);
        if (temp != 0) return temp;
    }else {
        if (loc >= tree.size() || tree[loc] == 0){
            return 0;
        }else {
            return loc;
        }
>>>>>>> e41f09a7621e8a427ada5b72a35fa121e67338d4
    }
}

void solve(){
    string line, s;
    getline(cin, line);
<<<<<<< HEAD
    stringstream ss(line);
    vector<int> tree;
    vector<int> sub_tree;
=======
    vector<int> tree;
    vector<int> subtree;
    stringstream ss(line);
>>>>>>> e41f09a7621e8a427ada5b72a35fa121e67338d4
    while (ss >> s){
        tree.push_back(stoi(s));
    }
    getline(cin, line);
<<<<<<< HEAD
    stringstream ss(line);
    while (ss >> s){
        sub_tree.push_back(stoi(s));
    }
    int sub_root = sub_tree[0];

=======
    stringstream sss(line);
    while (sss >> s){
        subtree.push_back(stoi(s));
    }
    int subroot = subtree[0];
    int loc = findroot(tree, subroot, 0);
    cout << loc << "\n";
>>>>>>> e41f09a7621e8a427ada5b72a35fa121e67338d4
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
<<<<<<< HEAD
    while (n--){
=======
    while(n--){
>>>>>>> e41f09a7621e8a427ada5b72a35fa121e67338d4
        solve();
    }
}