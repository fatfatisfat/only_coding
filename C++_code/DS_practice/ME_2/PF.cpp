#include <bits/stdc++.h>
using namespace std;

int search(int root, int low, int high, const vector<int> tree, int sum){
    if (root >= tree.size() || tree[root] == 0){
        return 0;
    }else if (tree[root] >= low && tree[root] <= high){
        return tree[root] + search(root*2+1, low, high, tree, sum) + search(root*2+2, low, high, tree, sum);
    }else if (tree[root] < low){
        return search(root*2+2, low, high, tree, sum);
    }else if (tree[root] > high){
        return search(root*2+1, low, high, tree, sum);
    }
    return 0;
}

void solve(){
    string line;
    getline(cin, line);
    string s;
    stringstream ss(line);
    vector<int> tree;
    while (ss >> s){
        tree.push_back(stoi(s));
    }
    int low, high;
    cin >> low >> high;
    cin.ignore();
    int root = 0;
    int sum = 0;
    sum = search(root, low, high, tree, sum);
    cout << sum << "\n";
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
}