#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Lab {
    ll a, b, c;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<Lab> labs(n);
        ll mn = LLONG_MAX;

        for (auto &[a, b, c] : labs) {
            cin >> a >> b >> c;
            mn = min(mn, a + b + c);
        }

        auto check = [&](ll target) -> bool {
            ll used = 0;

            for (auto [a, b, c] : labs) {
                ll sum = a + b + c;

                if (sum >= target)
                    continue;

                ll cost = target - sum;

                if (a <= b && b <= c) {
                    if (a == b && b == c)
                        return false;

                    ll e = min(b - a, c - b) + 1;
                    cost += 2 * e;
                }

                if (cost > k - used)
                    return false;

                used += cost;
            }

            return true;
        };

        ll lo = mn, hi = mn + k;

        while (lo < hi) {
            ll mid = lo + (hi - lo + 1) / 2;

            if (check(mid))
                lo = mid;
            else
                hi = mid - 1;
        }

        cout << lo << '\n';
    }

    return 0;
}