#include <bits/stdc++.h>
using namespace std;

bool check(int x, int y, int n, int m){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void solve(){
    int x[] = {1, 0, -1, 0, 1, -1, 1, -1};
    int y[] = {0, 1, 0, -1, 1, 1, -1, -1};
    int n, m, d1, d2;
    cin >> n >> m >> d1 >> d2;
    vector<vector<char>> arr(n, vector<char>(m, '0'));
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        for (int j=0; j<m; j++){
            char c = s[j];
            if (c == 'V'){
                arr[i][j] = 'V';
                for (int k=0; k<8; k++){
                    int new_x = i + x[k];
                    int new_y = j + y[k];
                    if (check(new_x, new_y, n, m) && arr[new_x][new_y] != 'V'){
                        if (k < 4){
                            arr[new_x][new_y] = (char)max((int)arr[new_x][new_y], '0' + d1);
                        }else {
                            arr[new_x][new_y] = (char)max((int)arr[new_x][new_y], '0' + d2);
                        }
                    }
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i=1; i<=t; i++){
        cout << "Airplane #" << i << ":\n";
        solve();
    }
    return 0;
}