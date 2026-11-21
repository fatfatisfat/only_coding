#include <bits/stdc++.h>
using namespace std;

vector<int> wood;
vector<int> poster;

bool check(int mid){
    int ptr = 0;
    int count = 0;
    for (int c : wood){
        if (c >= mid) count++;
        else count = 0;
        while (ptr < poster.size() && count >= poster[ptr]){
            count -= poster[ptr];
            ptr++;
        }
        if (ptr >= poster.size()) return true;
    }
    return false;
}

void solve(){
    int n, p;
    while (cin >> n >> p){
        wood.assign(n, 0);
        poster.assign(p, 0);
        int MAX = 0;
        for (int i=0; i<n; i++){
            cin >> wood[i];
            MAX = max(MAX, wood[i]);
        }
        for (int i=0; i<p; i++){
            cin >> poster[i];
        }
        int top = MAX;
        int bot = 0;
        int ans = 0;
        while (top >= bot){
            int mid = (top + bot) / 2;
            if (check(mid)){
                ans = mid;
                bot = mid + 1;
            }else {
                top = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}