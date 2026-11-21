#include <bits/stdc++.h>
using namespace std;

int N = 100000000;
vector<bool> is_prime(N + 1, true);
vector<int> primes;

void do_prime(){
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i=2; i*i<=N; i++){
        if (is_prime[i]){
            for (int j=i*i; j<=N; j+=i){
                is_prime[j] = false;
            }
        }
    }
    for (int i=2; i<=N; i++){
        if (is_prime[i]) primes.push_back(i);
    }
    return;
}

void solve(){
    int n;
    while (cin >> n){
        if (n < 4){
            cout << n << " is not the sum of two primes!\n";
        }else if (n & 1){
            if (is_prime[n - 2]){
                cout << n << " is the sum of " << 2 << " and " << n - 2 << ".\n";
            }else {
                cout << n << " is not the sum of two primes!\n";
            }
        }else {
            int left = 0;
            int right = primes.size() - 1;
            int ptr = 0;
            while (left <= right){
                int mid = (left + right) / 2;
                if (primes[mid] >= n / 2){
                    ptr = mid;
                    right = mid - 1;
                }else {
                    left = mid + 1;
                }
            }
            bool f = false;
            while (ptr--){
                if (is_prime[n - primes[ptr]]){
                    cout << n << " is the sum of " << primes[ptr] << " and " << n - primes[ptr] << ".\n";
                    f = true;
                    break;
                }
            }
            if (!f) cout << n << " is not the sum of two primes!\n";
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do_prime();
    solve();
    return 0;
}