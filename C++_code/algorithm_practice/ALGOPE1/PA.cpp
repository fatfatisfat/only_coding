#include <bits/stdc++.h>
using namespace std;

void solution1(int v, int e){
    vector<vector<int>> arr(v, vector<int>(v, 100));
    for (int i=0; i<e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a-1][b-1] = c;
        arr[b-1][a-1] = c;
    }
    for (int i=0; i<v; i++){
        arr[i][i] = 0;
    }
    for (int i=0; i<v; i++){
        for (int j=0; j<v; j++){
            if (arr[i][j] < 10) cout << "  " << arr[i][j];
            else if (arr[i][j] < 100) cout << " " << arr[i][j];
            else cout << arr[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    return;
}

void solution2(int v, int e){
    vector<vector<pair<int, int>>> arr(v);
    for (int i=0; i<e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a-1].push_back({b, c});
        arr[b-1].push_back({a, c});
    }
    for (int i=0; i<v; i++){
        sort(arr[i].begin(), arr[i].end(), [](auto a, auto b){
            return a.first < b.first;
        });
    }
    for (int i=0; i<v; i++){
        cout << i + 1;
        for (auto c : arr[i]){
            cout << " " << c.first << " " << c.second;
        }
        cout << "\n";
    }
    return;
}

int main(){
    int v, e, ds;
    while (cin >> v >> e >> ds){
        if (v == 0 && e == 0 && ds == 0) break;
        if (ds == 0){
            solution1(v, e);
        }else {
            solution2(v, e);
        }
        cout << "\n";
    }
    return 0;
}