#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    set<int> arr;
    int count = 0;
    string s;
    while (ss >> s){
        arr.insert(stoi(s));
        count++;
    }
    bool f = true;
    for (int i=1; i<=count; i++){
        if (arr.find(i) == arr.end()){
            if (!f) cout << " ";
            cout << i;
            f = false;
        }
    }
    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
}