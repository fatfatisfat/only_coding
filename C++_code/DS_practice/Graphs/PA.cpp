#include <bits/stdc++.h>
using namespace std;

void arrays(int v, int e){
    vector<vector<int>> arr(v, vector<int>(v, 100));
    for (int i=0; i<v; i++){
        arr[i][i] = 0;
    }
    int v1, v2, w;
    for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;
        arr[v1-1][v2-1] = w;
        arr[v2-1][v1-1] = w;
    }
    for (int i=0; i<v; i++){
        for (int j=0; j<v; j++){
            if (j > 0) cout << " ";
            printf("%3d", arr[i][j]);
        }
        cout << "\n";
    }
    return;
}

void linked_list(int v, int e){
    vector<vector<pair<int, int>>> arr(v);
    int v1, v2, w;
    for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;
        arr[v1-1].push_back({v2, w});
        arr[v2-1].push_back({v1, w});
    }

    for (int i=0; i<(int)arr.size(); i++){
        sort(arr[i].begin(), arr[i].end());
        cout << i+1;
        for (int j=0; j<(int)arr[i].size(); j++){
            cout << " " << arr[i][j].first << " " << arr[i][j].second;
        }
        cout << "\n";
    }
    return;
}

int main(){
    int v, e, ds;
    bool f = true;
    while (cin >> v >> e >> ds){
        if (v == 0 && e == 0 && ds == 0) break;
        if (!f) cout << "\n";
        if (ds == 0){
            arrays(v, e);
        }else if (ds == 1){
            linked_list(v, e);
        }
        f = false;
    }
    return 0;
}