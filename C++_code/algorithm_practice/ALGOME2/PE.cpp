#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

bool check(int i, int j){
    return i >= 0 && j >= 0;
}

void solve(){
    int T;
    cin >> T;
    
    while(T--){
        int w, n;
        cin >> w >> n;
        cin.ignore();
        vector<vector<int>> arr(w, vector<int>(n, 0));
        //vector<bool> w_block(w, false);
        //vector<bool> n_block(n, false);
        arr[0][0] = 1;
        for (int i=0; i<w; i++){
            string s;
            getline(cin, s);
            stringstream ss(s);
            string a;
            ss >> a;
            string c;
            while(ss >> c){
                int cur_i = (int)stoi(a) - 1;
                int cur_j = (int)stoi(c) - 1;
                arr[cur_i][cur_j] = -1;
            }
        }
        for (int i=0; i<w; i++){
            for (int j=0; j<n; j++){
                if (arr[i][j] == -1) continue;
                if (check(i - 1, j) && arr[i-1][j] != -1) arr[i][j] = (arr[i][j] + arr[i-1][j]) % MOD;
                if (check(i, j - 1) && arr[i][j-1] != -1) arr[i][j] = (arr[i][j] + arr[i][j-1]) % MOD;
            }
        }
        int ans;
        if (arr[w-1][n-1] == -1) ans = 0;
        else ans = arr[w-1][n-1];
        cout << ans << "\n";
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
}