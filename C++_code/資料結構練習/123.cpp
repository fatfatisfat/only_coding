#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
#include <deque>

#define int long long

void solve() {
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);

    int x;
    std::vector<int> v;
    std::vector<int> pre;
    pre.push_back(0);

    int max_sum = std::numeric_limits<int>::min();
    int cur_sum = 0;
    
    while(ss >> x) {
        v.push_back(x); 
        pre.push_back(pre[pre.size() - 1] + x);
        
        cur_sum = std::max(cur_sum + x, x);
        max_sum = std::max(max_sum, cur_sum);
    }

    int n = v.size();
    std::deque<int> dq;
    while(std::cin >> x) {
        if(x > max_sum) {
            std::cout << "0\n";
            continue;
        }

        dq.clear();
        int ans = std::numeric_limits<int>::max();
        for(int i = 0; i < n + 1; ++i) {
            while(!dq.empty() && pre[i] - pre[dq.front()] >= x) {
                ans = std::min(ans, i - dq.front());
                dq.pop_front();

                if(ans == 1) { break; }
            }
            if(ans == 1) { break; }

            while(!dq.empty() && pre[i] <= pre[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }

        std::cout << ans << '\n';
    }
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    
    return 0;
}