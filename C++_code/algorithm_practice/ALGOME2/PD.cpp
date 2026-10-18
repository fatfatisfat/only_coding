#include <bits/stdc++.h>
using namespace std;

int MAX = 100000000;
vector<bool> is_primes(MAX + 1, true);
vector<int> primes;

void sieve(){
    is_primes[0] = false;
    is_primes[1] = false;
    for (int i=2; i*i<=MAX; i++){
        if (is_primes[i]){
            for (int j=i*i; j<=MAX; j+=i){
                is_primes[j] = false;
            }
        }
    }
    for (int i=2; i<=MAX; i++){
        if (is_primes[i]) primes.push_back(i);
    }
    return;
}

void solve(int n){
    if (n <= 4){
        cout << n << " is not the sum of two primes!\n";
        return;
    }
    if (n & 1){
    if (is_primes[n - 2]){
            cout << n << " is the sum of 2 and " << n-2 << ".\n";
        }else {
            cout << n << " is not the sum of two primes!\n";
        }
        return;
    }
    int ptr = 0;
    int left = 0;
    int right = primes.size() - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (primes[mid] >= n / 2){
            right = mid - 1;
        }else {
            left = mid + 1;
            ptr = mid;
        }
    }
    while (ptr >= 0){
        if (is_primes[n - primes[ptr]]){
            cout << n << " is the sum of " << primes[ptr] << " and " << n - primes[ptr] << ".\n";
            return;
        }
        ptr--;
    }
    cout << n << " is not the sum of two primes!\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n;
    while (cin >> n){
       solve(n); 
    }
}