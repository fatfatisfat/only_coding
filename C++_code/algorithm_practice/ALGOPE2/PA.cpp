#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<bool> visited; 

void bfs(int v){
    deque<int> arr;
    arr.push_back(v);
    visited[v] = true;
    while (!arr.empty()){
        int root = arr.front();
        cout << root << " ";
        arr.pop_front();
        for (int c : tree[root]){
            if (!visited[c]){
                arr.push_back(c);
                visited[c] = true;
            } 
        }
    }
}

void dfs(int v){
    visited[v] = true;
    
}

void solve(){
    int v, e, t;
    while (cin >> v >> e >> t){
        if (v == 0 && e == 0 && t == 0) break;
        tree.assign(v + 1, vector<int>());
        for (int i=0; i<e; i++){
            int a, b;
            cin >> a >> b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        visited.assign(v + 1, false);
        visited[1] = true;
        if (t == 0) bfs(1);
        else dfs(1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}