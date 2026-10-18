#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(4));
    for (int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    int max_m = -1;
    for (int i=n; i>=0; i--){
        int count = 0;
        for (int j=0; j<n; j++){
            if (!(count + 1 >= arr[j][0] && count + 1 <= arr[j][1]) && !(i - count >= arr[j][2] && i - count <= arr[j][3])){
                count++;
                if (count == i){
                    max_m = i;
                    break;
                }
            }
        }
        if (max_m != -1) break;
    }
    if (max_m == -1) max_m = 0;
    cout << max_m << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}