#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

void solve(){
    int row, col;
    cin >> row >> col;
    cin.ignore();
    vector<vector<int>> arr(row + 1, vector<int>(col + 1, 0));
    for (int i=1; i<=row; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string t, a;
        ss >> t;
        while (ss >> a){
            arr[stoi(t)][stoi(a)] = -1;
        }
    }
    if (arr[1][1] == -1 || arr[row][col] == -1){
        cout << 0 << "\n";
    }else {
        for (int i=1; i<=row; i++){
            if (arr[i][1] == -1) break;
            arr[i][1] = 1;
        }
        for (int i=1; i<=col; i++){
            if (arr[1][i] == -1) break;
            arr[1][i] = 1;
        }
        for (int i=2; i<=row; i++){
            for (int j=2; j<=col; j++){
                if (arr[i][j] == -1) continue;
                arr[i][j] += (max(arr[i-1][j], 0) + max(arr[i][j-1], 0)) % MOD;
            }
        }
        cout << arr[row][col] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
        solve();
    }
    return 0;
}