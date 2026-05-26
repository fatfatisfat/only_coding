#include <bits/stdc++.h>
using namespace std;

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
    }
}

void solve(){
    string line, s;
    getline(cin, line);
    vector<int> tree;
    vector<int> subtree;
    stringstream ss(line);
    while (ss >> s){
        tree.push_back(stoi(s));
    }
    getline(cin, line);
    stringstream sss(line);
    while (sss >> s){
        subtree.push_back(stoi(s));
    }
    int subroot = subtree[0];
    int loc = findroot(tree, subroot, 0);
    cout << loc << "\n";
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        solve();
    }
}