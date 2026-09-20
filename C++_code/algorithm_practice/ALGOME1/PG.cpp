#include <iostream>
#include <algorithm>
#include <vector>

#define int long long
using namespace std;

const int MAX_MEMO = 1000000;
vector<int> memo(MAX_MEMO, 0);

int get_cycle(int n) {
    int count = 1;
    int num = n;

    while (n > 1) {
        if (n < MAX_MEMO && memo[n] != 0) {
            count += memo[n] - 1;
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }

    if (num < MAX_MEMO) {
        memo[num] = count;
    }

    return count;
}

void solve(int n, int m) {
    int start = min(n, m);
    int end = max(n, m);
    int ans = 0;
    for (int i = start; i <= end; i++) {
        ans = max(ans, get_cycle(i));
    }
    cout << n << " " << m << " " << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j;
    while (cin >> i >> j) {
        solve(i, j);
    }
    return 0;
}