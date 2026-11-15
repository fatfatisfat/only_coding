#include <bits/stdc++.h>
using namespace std;

int INF = 1e9;

struct edge{
    int to;
    int dist;
    int freq;

    bool operator<(const edge& other) const {
        if (freq != other.freq) {
            return freq < other.freq; // 頻率較高者優先
        }
        return dist > other.dist;     // 頻率相同時，距離較近（較小）者優先
    }
};

void solve(int n, int m, int city){
    vector<vector<int>> min_dist(n + 1, vector<int>(n + 1, INF));
    vector<vector<int>> freqs(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> adj(n + 1);

    for (int i=1; i<=n; i++){
        min_dist[i][i] = 0;
    }

    for (int i=0; i<m; i++){
        int x, y, dist, freq;
        cin >> x >> y >> dist >> freq;
        adj[x].push_back(y);
        adj[y].push_back(x);
        min_dist[x][y] = min(min_dist[x][y], dist);
        min_dist[y][x] = min(min_dist[y][x], dist);
        freqs[x][y] = freq;
        freqs[y][x] = freq;
    }

    for (int k=1; k<=n; k++){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++){
                min_dist[i][j] = min(min_dist[i][j], min_dist[i][k] + min_dist[k][j]);
            }
        }
    }

    priority_queue<edge> pq;
    vector<bool> infected(n + 1, false);
    vector<int> ans;

    infected[city] = true;
    ans.push_back(city);
    for (int next_city : adj[city]){
        pq.push({next_city, min_dist[city][next_city], freqs[city][next_city]});
    }

    while (!pq.empty() && (int)ans.size() < n){
        edge cur = pq.top();
        pq.pop();
        int u = cur.to;
        if (infected[u]) continue;
        infected[u] = true;
        ans.push_back(u);

        for (int v : adj[u]){
            if (!infected[v]){
                pq.push({v, min_dist[u][v], freqs[u][v]});
            }
        }
    }
    for (int num : ans){
        cout << num << " ";
    }
    cout << "\n";
    return;
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