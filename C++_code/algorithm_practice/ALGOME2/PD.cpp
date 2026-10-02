#include <iostream>
#include <bitset>
using namespace std;

const int MAX = 100000000;

bitset<50000000> is_prime;

bool isPrime(int n) {
    if (n == 2) return true;
    if (n < 2 || n % 2 == 0) return false;
    return is_prime[(n - 3) / 2];
}

void do_primes() {
    is_prime.set(); 
    
    for (int i = 3; i * i <= MAX; i += 2) {
        if (is_prime[(n - 3) / 2]) {
            for (long long j = 1LL * i * i; j <= MAX; j += (i * 2)) {
                is_prime[(j - 3) / 2] = 0;
            }
        }
    }
}

void solve() {
    int n;
    while (cin >> n) {
        if (n < 5) {
            cout << n << " is not the sum of two primes!\n";
            continue;
        }

        if (n % 2 != 0) {
            if (isPrime(n - 2)) {
                cout << n << " is the sum of 2 and " << n - 2 << ".\n";
            } else {
                cout << n << " is not the sum of two primes!\n";
            }
            continue;
        }

        bool found = false;
        int start = (n - 1) / 2;
        if (start % 2 == 0) start--;

        for (int i = start; i >= 3; i -= 2) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << n << " is the sum of " << i << " and " << n - i << ".\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << n << " is not the sum of two primes!\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    do_primes();
    solve();
    
    return 0;
}