#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    int n;
    cin >> n;
    cin.ignore();
    vector<int> arr;
    string s;
    while (ss >> s){
        arr.push_back(stoi(s));
    }
    sort(arr.begin(), arr.end());
    set<int, greater<int>> unique_num(arr.begin(), arr.end());
    if (unique_num.size() < n){
        cout << arr[arr.size()-1] << "\n";
    }else {
        int ans;
        for (int num : unique_num){
            if (n == 0) break;
            ans = num;
            n--;
        }
        cout << ans << "\n";
    }
    
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
}