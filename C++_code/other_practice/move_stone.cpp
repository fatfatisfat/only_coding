#include <bits/stdc++.h>
#define int long long
using namespace std;

void other_solution(const vector<vector<int>>& arr, int n){
    int zeros = 0;
    int two_steps = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (arr[i][j] == 0){
                zeros++;
                bool f = false;
                for (int k=0; k<n; k++){
                    if (arr[i][k] > 1){
                        f = true;
                        break;
                    }
                }
                if (!f){
                    for (int k=0; k<n; k++){
                        if (arr[k][j] > 1){
                        f = true;
                        break;
                        }
                    }
                }
                if (!f) two_steps++;
            }
        }
    }
    int ans = (two_steps * 2) + (zeros - two_steps);
    cout << ans;
}

void solve(){
    stringstream ss;
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    other_solution(arr, n);
    /*int ans = 0;
    for (int i=0; i<n; i++){
        int sum1 = 0;
        int sum2 = 0;
        for (int j=0; j<n; j++){
            sum1 += arr[i][j];
            sum2 += arr[j][i];
        }
        if (sum1 > n) ans += sum1 - n;
        if (sum2 > n) ans += sum2 - n;
    }
    //if (ans == 0) other_solution(arr, n);
    //else cout << ans;
    cout << ans;
    */
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

/*
5
1 2 4 0 1
2 0 0 2 0
1 4 1 0 1
2 0 0 0 0
1 2 0 1 0


*/