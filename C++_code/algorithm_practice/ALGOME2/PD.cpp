#include <iostream>
#include <vector>
#include <cmath>

#define ll long long

std::vector<bool> is_prime;
std::vector<int> primes;

void sieve(int n) {
    is_prime = std::vector<bool>(n + 1, true);
    primes = std::vector<int>();
    primes.reserve(n / std::log(n) + 1);

    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < n + 1; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }

        for (int p : primes) {
            if ((ll)i * p > n) {
                break;
            }
            is_prime[i * p] = false;
            if (i % p == 0) {
                break;
            }
        }
    }
}

void solve(int n) {
    std::cout << n;

    if (n <= 4) {
        std::cout << " is not the sum of two primes!\n";
        return;
    }

    if (n & 1) {
        if (is_prime[n - 2]) {
            std::cout << " is the sum of 2 and " << n - 2 << ".\n";
        } else {
            std::cout << " is not the sum of two primes!\n";
        }
        return;
    }

    int ptr = 0;
    int l = 0;
    int r = primes.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (primes[m] >= n / 2) {
            r = m - 1;
        } else {
            l = m + 1;
            ptr = m;
        }
    }

    while (ptr >= 0) {
        if (is_prime[n - primes[ptr]]) {
            std::cout << " is the sum of " << primes[ptr] << " and " << n - primes[ptr] << ".\n";
            return;
        }
        --ptr;
    }

    std::cout <<  " is not the sum of two primes!\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    sieve(100000000 + 1);

    int n;
    while (std::cin >> n) {
        solve(n);
    }

    return 0;
}