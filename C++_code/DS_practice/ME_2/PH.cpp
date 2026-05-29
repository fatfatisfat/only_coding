#include <bits/stdc++.h>
using namespace std;

void solve(int len, string pre, string in){
    if (pre.empty()) return;
    char root = pre[0];
    int root_loc = in.find(root);
    string left_pre, right_pre, left_in, right_in;
    left_in = in.substr(0, root_loc);
    right_in = in.substr(root_loc + 1);
    left_pre = pre.substr(1, left_in.length());
    right_pre = pre.substr(left_in.length() + 1);
    solve(len, left_pre, left_in);
    solve(len, right_pre, right_in);
    cout << root;
}

int main(){
    int n;
    cin >> n;
    while (n--){
        int len;
        string pre, in;
        cin >> len >> pre >> in;
        solve(len, pre, in);
        cout << "\n";
    }
}