#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
vector<int> r;
vector<vector<int>> adj;
vector<vector<int>> dp;

void dfs(int root){
    dp[root][0] = 0;
    dp[root][1] = r[root];
    
    for (int leaf : adj[root]){
        dfs(leaf);

        dp[root][0] += max(dp[leaf][0], dp[leaf][1]);
        dp[root][1] += dp[leaf][0];
    }
}

void solve(){
    unordered_map<string, int> name_to_id;
    r.assign(n + 1, 0);
    adj.assign(n + 1, vector<int>());
    dp.assign(n + 1, vector<int>(2, 0));
    vector<bool> has_root (n + 1, false);

    for (int i=1; i<=n; i++){
        string name;
        int num;
        cin >> name >> num;
        name_to_id[name] = i;
        r[i] = num;
    }
    for (int i=0; i<n-1; i++){
        string root, leaf;
        cin >> root >> leaf;
        int a = name_to_id[root];
        int b = name_to_id[leaf];
        adj[a].push_back(b);
        has_root[b] = true;
    }
    int root = 1;
    for (int i=1; i<=n; i++){
        if (!has_root[i]){
            root = i;
            break;
        }
    }

    dfs(root);

    cout << max(dp[root][0], dp[root][1]) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin >> n){
        if (n == 0) break;
        solve();
    }
}