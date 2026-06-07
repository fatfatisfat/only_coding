#include <bits/stdc++.h>
using namespace std;

struct edge {
    int v1, v2, w;
};

int parent[205];

int find(int i){
    if (parent[i] == i) return i;
    return parent[i] = find(parent[i]);
}

void solve(){
    int v, e;
    cin >> v >> e;
    vector<edge> edges(e);
    for (int i=0; i<e; i++){
        cin >> edges[i].v1 >> edges[i].v2 >> edges[i].w;
    }
    sort(edges.begin(), edges.end(), [](edge a, edge b){
        return a.w < b.w;
    });
    for (int i=0; i<=v; i++) parent[i] = i;

    int total = 0;
    int count = 0;

    for (int i=0; i<e; i++){
        int root_v1 = find(edges[i].v1);
        int root_v2 = find(edges[i].v2);

        if (root_v1 != root_v2){
            parent[root_v1] = root_v2;
            total += edges[i].w;
            count++;
        }
        if (count == v-1) break;
    }
    cout << total << "\n";
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solve();
    }
}