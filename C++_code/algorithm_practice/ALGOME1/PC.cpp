#include <bits/stdc++.h>
#include <algorithm>
#define int long long

using namespace std;

void solution1(int v, int e){
    vector<vector<int>> arr(v, vector<int>(v, 100));
    int v1, v2, w;
    for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;
        v1--; v2--;
        arr[v1][v2] = w;
        arr[v2][v1] = w;
    }
    for (int i=0; i<v; i++){
        arr[i][i] = 0;
    }
    for (int i=0; i<v; i++){
        bool f = true;
        for (int j=0; j<v; j++){
            if (!f) cout << " ";
            f = false;
            cout << setw(3) << arr[i][j];
        }
        cout << "\n";
    }
    return;
}

void solution2(int v, int e){
    vector<vector<pair<int, int>>> arr(v);
    int v1, v2, w;
    for (int i=0; i<e; i++){
        cin >> v1 >> v2 >> w;
        arr[v1-1].push_back({v2, w});
        arr[v2-1].push_back({v1, w});
    }
    for (int i=0; i<v; i++){
        sort(arr[i].begin(), arr[i].end(), [](pair<int, int> a, pair<int, int> b){
            return a.first < b.first;
        });
    }
    for (int i=0; i<v; i++){
        cout << i+1;
        for (size_t j=0; j<arr[i].size(); j++){
            cout << " " << arr[i][j].first << " " << arr[i][j].second;
        }
        cout << "\n";
    }
    return;
}

signed main(){
    int v, e, ds;
    bool f = true;
    while (cin >> v >> e >> ds){
        if (!f) cout << "\n";
        f = false;
        if (v == 0 && e == 0 && ds == 0) break;
        else if (ds == 0) solution1(v, e);
        else solution2(v, e);
    }
    return 0;
}