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
    
    // 依據題目：由編號小的節點先放入堆疊
    for (int i=1; i<=v; i++){
        sort(arr[i].begin(), arr[i].end());
    }
    
    stack<int> dfs;
    vector<bool> visited(v+1, false);
    dfs.push(1); 
    // 移除原先在這邊的 visited[1] = true;

    bool f = true;
    while (!dfs.empty()){
        int q = dfs.top();
        dfs.pop();
        
        // 修正 1：在彈出 (pop) 後才判斷與標記
        if (visited[q]) continue;
        visited[q] = true;

        if (!f) cout << " ";
        f = false;
        cout << q;
        
        for (int n : arr[q]){        
            // 修正 2：只將還沒走訪過的節點放入堆疊
            if (!visited[n]) {
                dfs.push(n);
            }
        }
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v, e;
    while (cin >> v >> e){
        if (v == 0 && e == 0) break;
        solve(v, e);
        cout << "\n";
    }
    return 0;
}