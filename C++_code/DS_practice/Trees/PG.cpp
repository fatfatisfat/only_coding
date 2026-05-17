#include <bits/stdc++.h>
using namespace std;

void solution(string pre, string in){
    if (pre.empty()) return;
    char root = pre[0];
    int root_loc = in.find(root);
    string left_in = in.substr(0, root_loc);
    string right_in = in.substr(root_loc + 1);
    string left_pre = pre.substr(1, left_in.length());
    string right_pre = pre.substr(1 + left_in.length());
    solution(left_pre, left_in);
    solution(right_pre, right_in);
    cout << root;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s1, s2;
        cin >> n >> s1 >> s2;
        solution(s1, s2);
        cout << endl;
    }
    return 0;
}