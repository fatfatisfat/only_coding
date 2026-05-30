#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& arr, vector<bool>& visited){
    queue<int> q;
    vector<int> result;
    q.push(start);
    visited[start] = true;

    while (!q.empty()){
        int temp = q.front();
        q.pop();
        result.push_back(temp);

        for(int v : arr[temp]){
            if (!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }

    for (int i=0; i<result.size(); i++){
        if (i>0) cout << " ";
        cout << result[i];
    }
    cout << "\n";
}

void dfs(int start, vector<vector<int>>& arr, vector<bool>& visited){
    stack<int> s;
    vector<int> result;
    s.push(start);

    while (!s.empty()){
        int temp = s.top();
        s.pop();

        if (visited[temp]) continue;
        visited[temp] = true;
        result.push_back(temp);

        for (int v : arr[temp]){
            if (!visited[v]) s.push(v);
        }
    }

    for (int i=0; i<result.size(); i++){
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << "\n";
}

int main(){
    int v, e, t;
    while (cin >> v >> e >> t){
        if (v == 0 && e == 0 && t == 0) break;
        
        vector<vector<int>> arr(v+1);
        vector<bool> visited(v+1, false);
        int v1, v2;
        for (int i=0; i<e; i++){
            cin >> v1 >> v2;
            arr[v1].push_back(v2);
            arr[v2].push_back(v1);
        }
        for (int i=1; i<=v; i++){
            sort(arr[i].begin(), arr[i].end());
        }

        if (t == 0){
            bfs(1, arr, visited);
        }else if (t == 1){
            dfs(1, arr, visited);
        }
    }
}