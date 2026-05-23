#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, temp;
    cin >> n;
    vector<int> arr;
    while (n--){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> n;
    int count = 1;
    for (int c : arr){
        if (c < n) count++;
        else break;
    }
    cout << count << "\n";
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solve();
    }
}