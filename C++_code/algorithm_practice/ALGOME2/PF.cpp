#include <bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    while (cin >> t){
        int MAX = 0;
        vector<pair<int, int>> time;
        for (int i=0; i<t; i++){
            int s, d;
            cin >> s >> d;
            MAX = max(MAX, d);
            time.push_back({s, d});
        }
        vector<int> arr(MAX + 1, 0);
        int ans = 0;
        for (auto p : time){
            for (int i=p.first; i<p.second; i++){
                arr[i]++;
                ans = max(ans, arr[i]);
            }
        }
        /*
        for (int i=0; i<MAX; i++){
            cout << arr[i] << " ";
        }
        */
        cout << "\n";
        cout << ans << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}