#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<vector<int>> adj(n+1);
        for (int i=1; i<=n; i++){
            int l, r;
            cin >> l >> r;
            if (l != 0) adj[i].push_back(l);
            if (r != 0) adj[i].push_back(r);
        }
        vector<int> q;
        q.push_back(1);
        vector<int> depth(n+1, 0);
        depth[1] = 1;
        int max = 1;
        for (int i=0; i<q.size(); i++){
            int u = q[i];
            
            for (int v : adj[u]){
                depth[v] = depth[u] + 1;
                q.push_back(v);
                if (depth[v] > max) max = depth[v];
            }
        }
        cout << max << endl;
    }
}