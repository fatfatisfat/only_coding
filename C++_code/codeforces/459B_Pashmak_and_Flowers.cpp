#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n == 2){
        int a, b;
        cin >> a >> b;
        cout << abs(a - b) << " " << "1\n";
    }else {
        unordered_map<int, int> sums;
        vector<int> arr(n);
        int MAX = 0, MIN = INT_MAX;
        for (int i=0; i<n; i++){
            cin >> arr[i];
            MAX = max(MAX, arr[i]);
            MIN = min(MIN, arr[i]);
        }
        ll sum1 = 0, sum2 = 0;
        for (int i=0; i<n; i++){
            if (MAX == MIN){
                sum1++;
                continue;
            }
            if (arr[i] == MAX) sum1++;
            if (arr[i] == MIN) sum2++;
        }
        ll sum;
        if (MAX == MIN) sum = sum1 * (sum1 - 1) / 2;
        else sum = sum1 * sum2;
        cout << MAX - MIN << " " << sum << "\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}