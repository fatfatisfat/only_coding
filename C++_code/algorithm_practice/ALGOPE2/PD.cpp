#include <bits/stdc++.h>
#define int long long
using namespace std;

void dfs(int root, vector<vector<int>>& dp, vector<int>& scores, vector<vector<int>>& tree){
    dp[root][0] = 0;
    dp[root][1] = scores[root];

    for (int leaf : tree[root]){
        dfs(leaf, dp, scores, tree);

        dp[root][0] += max(dp[leaf][0], dp[leaf][1]);
        dp[root][1] += dp[leaf][0];
    }
}

void solve(int n){
    unordered_map<string, int> nametoid;
    vector<int> scores(n + 1, 0);
    vector<vector<int>> tree(n + 1, vector<int>());
    vector<bool> has_root(n + 1, false);
    for (int i=0; i<n; i++){
        string name;
        int score;
        cin >> name >> score;
        nametoid[name] = i;
        scores[i] = score;
    }
    for (int i=0; i<n-1; i++){
        string root, leaf;
        cin >> root >> leaf;
        int a = nametoid[root];
        int b = nametoid[leaf];
        has_root[b] = true;
        tree[a].push_back(b);
    }
    int root = -1;
    for (int i=0; i<n; i++){
        if (!has_root[i]) root = i;
    }
    
    vector<vector<int>> dp(n, vector<int>(2, 0));
    dfs(root, dp, scores, tree);

    cout << max(dp[root][0], dp[root][1]) << "\n";
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n){
        if (n == 0) break;
        solve(n);
    }
    return 0;
}