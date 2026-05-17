#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> adj[n];
        vector<bool> deg(n, false);
        for (int i=0; i<n-1; i++){
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            deg[b] = true;
        }
        int root = 0;
        for (int i=0; i<n; i++){
            if (!deg[i]){
                root = i;
                break;
            }
        }
        vector<int> q;
        vector<vector <int>> up(n, vector<int>(18));
        vector<int> depth(n, 0);
        q.push_back(root);
        depth[root] = 0;
        for (int i=0; i<q.size(); i++){
            int u = q[i];
            for (int j=0; j<18; j++) up[root][j] = root;

            for (int j=1; j<18; j++){
                up[u][j] = up[up[u][j-1]][j-1];
            }

            for (int v : adj[u]){
                depth[v] = depth[u] + 1;
                up[v][0] = u;
                q.push_back(v);
            }
        }
        int c, d;
        cin >> c >> d;
        if (depth[c] < depth[d]) swap(c, d);
        for (int i=17; i>=0; i--){
            if (depth[c] - (1 << i) >= depth[d]) c = up[c][i];
        }
        if (c != d){
            for (int i=17; i>=0; i--){
                if (up[c][i] != up[d][i]){
                    c = up[c][i];
                    d = up[d][i];
                }
            }
            c = up[c][0];
        }
        cout << c << endl;
    }
    return 0;
}