#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m, int i, int j){
    return i < n && i >= 0 && j < m && j >= 0; 
}

void solve(){
    int T;
    cin >> T;
    vector<int> x = {1, 0, -1, 0, 1, 1, -1, -1};
    vector<int> y = {0, 1, 0, -1, 1, -1, -1, 1};
    for (int t=1; t<=T; t++){
        int n, m, d1, d2;
        cin >> n >> m >> d1 >> d2;
        vector<vector<int>> arr(n, vector<int>(m, 0));
        for (int i=0; i<n; i++){
            string s;
            cin >> s;
            for (int j=0; j<m; j++){
                char c = s[j];
                if (c == 'V') arr[i][j] = -1;
            }
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (arr[i][j] == -1){
                    for (int k=0; k<8; k++){
                        int new_i = i + y[k];
                        int new_j = j + x[k];
                        if (check(n, m, new_i, new_j)){
                            if (arr[new_i][new_j] == -1) continue;
                            if (k < 4){
                                arr[new_i][new_j] = max(arr[new_i][new_j], d1);
                            }else {
                                arr[new_i][new_j] = max(arr[new_i][new_j], d2);
                            }
                        }
                    }
                }
            }
        }
        cout << "Airplane #" << t << ":\n";
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (arr[i][j] == -1){
                    cout << 'V';
                }else {
                    cout << arr[i][j];
                }
            }
            cout << "\n";
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}