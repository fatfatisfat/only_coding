#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int count = 0;
    for (int i=0; i<n; i++){
        int num;
        cin >> num;
        if (num % 2 == 1){
            arr[i] = 1;
            count++;
        }
    }
    if (count > 1){
        for (int i=0; i<n; i++) if (arr[i] == 0) cout << i + 1;
    }else {
        for (int i=0; i<n; i++) if (arr[i] == 1) cout << i + 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}