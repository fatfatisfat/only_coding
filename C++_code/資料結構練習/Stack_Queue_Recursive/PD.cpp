#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    cin >> k;
    queue<string> q;
    string name;
    for (int i=0; i<k; i++){
        cin >> name;
        q.push(name);
    }
    while (q.size() > 1){
        for (int i=0; i<2; i++){
            string temp = q.front();
            q.pop();
            q.push(temp);
        }
        q.pop();
    }
    cout << q.front() << "\n";
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solve();
    }
    return 0;
}