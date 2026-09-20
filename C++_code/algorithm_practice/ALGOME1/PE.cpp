#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int v, int e){
    vector<vector<int>> arr(v+1, vector<int>());
    int a, b;
    for (int i=0; i<e; i++){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i=1; i<=v; i++){
        sort(arr[i].begin(), arr[i].end());
    }
    vector<bool> visited(v+1, false);
    queue<int> bfs;
    bfs.push(1);
    visited[1] = true;
    cout << 1;
    while (!bfs.empty()){
        int q = bfs.front();
        bfs.pop();
        for (int n : arr[q]){
            if (visited[n]) continue;
            bfs.push(n);
            visited[n] = true;
            cout << " " << n;
        }
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v, e;
    bool f = true;
    while (cin >> v >> e){
        if (v == 0 && e == 0) break;
        if (!f) cout << "\n";
        f = false;
        solve(v, e);
    }
}