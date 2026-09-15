#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int left, right;
        cin >> left >> right;
        int sum = left + right;
        int ssum = 0;
        while (sum > 0){
            ssum += sum % 10;
            sum /= 10;
        }
        if (ssum % 3 == 0 && abs(left - right) <= min(left, right)){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
}