#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    int total = (1 + n) * n / 2;
    if (total % 2 == 1){
        cout << "NO";
    }else {
        cout << "YES\n";
        int goal = total / 2;
        vector<bool> arr(n + 1, false);
        int sum = 0;
        int count = 0;
        for (int i=n; i>0; i--){
            if (i <= goal - sum){
                sum += i;
                arr[i] = true;
                count++;
            }
            if (sum == goal) break;
        }
        
        cout << count << "\n";
        for (int i=1; i<=n; i++){
            if (arr[i]){
                cout << i << " ";
            }
        }
        cout << "\n" << n - count << "\n";
        for (int i=1; i<=n; i++){
            if (!arr[i]){
                cout << i << " ";
            }
        }
    }
}