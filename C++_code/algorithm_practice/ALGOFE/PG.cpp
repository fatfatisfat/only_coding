#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int city){
    vector<vector<pair<pair<int, int>, int>>> adj(n + 1);
    for (int i=0; i<m; i++){
        int x, y, dist, freq;
        cin >> x >> y >> dist >> freq;
        adj[x].push_back({{freq, -dist}, y});
        adj[y].push_back({{freq, -dist}, x});
    }

    vector<bool> infected(n + 1, false);
    priority_queue<pair<pair<int, int>, int>> pq;

    pq.push({{0, 0}, city});
    while (!pq.empty()){
        auto cur = pq.top();
        pq.pop();
        if (infected[cur.second]) continue;
        cout << cur.second << " ";
        infected[cur.second] = true;

        for (auto next : adj[cur.second]){
            if (!infected[next.second]){
                pq.push(next);
            }
        }
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, city;
    while (cin >> n >> m >> city){
        if (n == 0 && m == 0 && city == 0) break;
        solve(n, m, city);
    }
    return 0;
}