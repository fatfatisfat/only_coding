#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

struct Lab {
    ll sum;
    bool can_add;
};

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<Lab> labs(n);
    ll max_limit = 4e18; // 預設極大值

    for (int i = 0; i < n; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        labs[i].sum = a + b + c;
        
        // 判斷是否初始就無法加水
        labs[i].can_add = !(a == b && b == c);
        
        if (!labs[i].can_add) {
            max_limit = min(max_limit, labs[i].sum);
        }
    }
    
    sort(labs.begin(), labs.end(), [](const Lab& x, const Lab& y) {
        return x.sum < y.sum;
    });

    ll current_water = labs[0].sum;

    for (int i = 1; i < n; i++) {
        ll target = labs[i].sum;
        
        if (target > max_limit) {
            target = max_limit;
        }

        ll diff = target - current_water;
        
        if (diff <= 0) continue; // 確保只有在需要提升時才運作

        // 利用除法避免 (i * diff) 造成 long long 溢位
        if (k / i >= diff) {
            ll need = (ll)i * diff;
            k -= need;
            current_water = target;
            if (current_water == max_limit) break;
        } else {
            // 水量不足以填平當前段差，均分給前 i 個實驗室後結束
            current_water += (k / i);
            k = 0;
            break;
        }
    }

    // 若所有實驗室都已拉平至 current_water，且還有剩餘的水
    if (k > 0 && current_water < max_limit) {
        ll add = k / n;
        current_water = min(max_limit, current_water + add);
    }

    cout << current_water << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}