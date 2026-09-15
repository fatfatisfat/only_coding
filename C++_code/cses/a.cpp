#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    int tot = n * (n + 1) / 2;
    if(tot & 1) return cout << "-1" << "\n",void();
    int goal = tot / 2;
    vector<bool> vis(n+1,false);

    auto cnt = [&](int a,int b) {
        return(a + b) * (b - a + 1) / 2;
    };

    int l = 1,r = n;
    int ans = 1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        int total = cnt(mid,n);
        if(total > goal){
            l = mid + 1;
        }else{
            ans = mid;
            r = mid - 1;
        }
    }
    int all = cnt(ans,n);
    int other = goal - all;
    // cout << other << "\n";
    vis[other] = true;
    int cnt1 = 0;
    for(int i=1; i<=n; i++){
        if(vis[i] || i >= ans) ++cnt1;
    }
    cout << cnt1 << "\n";
    for(int i=1; i<=n; i++){
        if(vis[i] || i >= ans) cout << i << " ";
    }
    cout <<"\n" <<n-cnt1 << "\n";
    for(int i=1; i<=n; i++){
        if(!vis[i] && i < ans) cout << i << " ";
    }
    cout << "\n";
}

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    solve();
}