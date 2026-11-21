#include <bits/stdc++.h>
using namespace std;

void solve(){
    int v, e;
    while (cin >> v >> e){
        if (v == 0 && e == 0) break;
        vector<vector<int>> arr(v + 1);
        vector<bool> visited(v + 1, false);
        for (int i=0; i<e; i++){
            int a, b;
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        for (int i=1; i<=v; i++){
            sort(arr[i].begin(), arr[i].end());
        }
        stack<int> dfs;
        dfs.push(1);
        while (!dfs.empty()){
            if(visited[dfs.top()]){
                dfs.pop();
                continue;
            }
            int cur = dfs.top();
            dfs.pop();
            visited[cur] = true;
            cout << cur << " ";
            for (int c : arr[cur]){
                if (!visited[c]){
                    dfs.push(c);
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}