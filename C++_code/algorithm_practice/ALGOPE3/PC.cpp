#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    vector<pair<int, int>> arr;
    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a, 1});
        arr.push_back({b, -1});
    }
    sort(arr.begin(), arr.end());
    int MAX = 0, count = 0;
    for (pair<int, int> c : arr){
        count += c.second;
        MAX = max(MAX, count);
    }
    cout << MAX << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n){
        solve(n);
    }
}