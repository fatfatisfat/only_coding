#include <bits/stdc++.h>
#define int long long
using namespace std;

void dfs(int p, const vector<vector<int>>& arr, vector<bool>& visit){
    visit[p] = true;
    cout << p << " ";

    for (int c : arr[p]){
        if (!visit[c]) dfs(c, arr, visit);
    }
    return;
}

void solve(int v, int e){
    vector<vector<int>> arr(v+1, vector<int>());
    vector<bool> visit(v+1, false);

    for (int i=0; i<e; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i=1; i<=v; i++){
        sort(arr[i].rbegin(), arr[i].rend());
    }

    dfs(1, arr, visit);
    return;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int v, e;
    while (cin >> v >> e){
        if (v == 0 && e == 0) break;
        solve(v, e);
        cout << "\n";
    }
    return 0;
}