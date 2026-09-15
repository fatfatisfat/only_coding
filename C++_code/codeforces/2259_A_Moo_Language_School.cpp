#include <bits/stdc++.h>
using namespace std;

bool check(vector<char> arr){
    bool c = true;
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == '0'){
            c = false;
            break;
        }
    }
    return c;
}

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for (int i=0; i<s.size(); i+=k){
        vector<char> arr;
        for(int j=0; j<k; j++){
            arr.push_back(s[i+j]);
        }
        if (check(arr)) count++;
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}