#include<bits/stdc++.h>
using namespace std;

struct state{
    int u, st, se;
    bool operator>(const state& other) const {
        if (st != other.st) return st > other.st;
        return se > other.se;
    }
};

void solve(int n, int e, int src, int dst){
    vector<vector<pair<int, pair<int, int>>>> adj(n+1);
    int v1, v2, st, se;    
    for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> st >> se;
        adj[v1].push_back({v2, {st, se}});
        adj[v2].push_back({v1, {st, se}});
    }

    vector<int> dist_st(n+1, 101);
    vector<int> dist_se(n+1, 101);

    priority_queue<state, vector<state>, greater<state>> pq;
    dist_st[src] = 0;
    dist_se[src] = 0;
    pq.push({src, 0, 0});

    while (!pq.empty()){
        auto [u, cur_st, cur_se] = pq.top();
        pq.pop();

        if (cur_st > dist_st[u] || (cur_st > dist_st[u] && cur_se > dist_se[u])) continue;

        if (u == dst) break;

        for (auto edge : adj[u]){
            int v = edge.first;
            int next_st = cur_st + edge.second.first;
            int next_se = cur_se + edge.second.second;

            if (next_st >= 100 || next_se >= 100) continue;

            if (next_st < dist_st[v] || (next_st == dist_st[v] && next_se < dist_se[v])){
                dist_st[v] = next_st;
                dist_se[v] = next_se;
                pq.push({v, next_st, next_se});
            }
        }
    }
    if (dist_st[dst] >= 100 || dist_se[dst] >= 100){
        cout << "Passed out\n";
    }else {
        printf("%d%% %d%%\n", 100-dist_st[dst], 100-dist_se[dst]);
    }
}

int main(){
    int n, e, src, dst;
    while (cin >> n >> e){
        if (n == 0 && e == 0) break;
        cin >> src >> dst;
        solve(n, e, src, dst);
    }
}