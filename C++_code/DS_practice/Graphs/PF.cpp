#include <bits/stdc++.h>
using namespace std;

int INF = 1000000000;

void solve(){
     int v, s, e;
     cin >> v >> e >> s;
     vector<vector<int>> g(v+2, vector<int> (v+2, INF));
     int v1, v2, w;
     for (int i=1; i<=v; i++) g[i][i] = 0;
     for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;
        g[v1][v2] = w;
        g[v2][v1] = w;
     }

    for (int k=1; k<=v; k++){
        for (int i=1; i<=v; i++){
            for (int j=1; j<=v; j++){
                if (g[i][k] < INF && g[k][j]){
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                }
           }
       }
    }
    for (int i=1; i<=v; i++){
        if (i > 1) cout << " ";
        cout << g[i][s];
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}