#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int mid, const vector<int> wood, const vector<int> poster){
    int count = 0, index = 0;
    for (int i=0; i<(int)wood.size(); i++){
        if (wood[i] >= mid) count++;
        else count = 0;

        if (count >= poster[index] && index == poster.size() - 1){
            return true;
        }
        else if (count == poster[index]){
            count = 0;
            index++;
            while (poster[index] == 0) index++;
        }
    }
    return false;
}

void solve(vector<int> w, vector<int> p){
    int up = INT_MIN, down = 0;
    for (int i=0; i<(int)w.size(); i++) up = max(up, w[i]);
    int ans;
    while (up >= down){
        int mid = (up + down) / 2;
        if (check(mid, w, p)){
            down = mid + 1;
            ans = mid;
        }else {
            up = mid - 1;
        }
    }
    cout << ans << "\n";
    return;
}

signed main(){
    int w, p;
    while (cin >> w >> p){
        vector<int> wood(w);
        vector<int> post(p);
        for (int i=0; i<w; i++) cin >> wood[i];
        for (int i=0; i<p; i++) cin >> post[i];
        solve(wood, post);
    }
    return 0;
}