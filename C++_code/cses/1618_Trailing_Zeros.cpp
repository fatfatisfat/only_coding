#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    int count = 0;
    while (n > 0){
        count += n / 5;
        n /= 5;
    }
    cout << count;
    return 0;
}