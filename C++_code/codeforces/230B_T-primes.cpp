#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 1000000;
bool is_prime[MAX + 1];
vector<int> arr;

void sieve(){
    fill(is_prime, is_prime + MAX + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p=2; p * p<=MAX; p++){
        if (is_prime[p]){
            for (int i=p * p; i<=MAX; i+=p){
                is_prime[i] = false;
            }
        }
    }

    for (int i=2; i<=MAX; i++){
        if (is_prime[i]){
            arr.push_back(i * i);
        }
    }
}

bool found(int n){
    int left = 0, right = arr.size() - 1;
    int ans = 0;
    while (right >= left){
        int mid = (left + right) / 2;
        if (n == arr[mid]){
            return true;
        }else if (n > arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

void solve(){
    sieve();

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (found(n)){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}