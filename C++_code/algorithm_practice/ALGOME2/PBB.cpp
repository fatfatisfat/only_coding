#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int p : prime){
        if (p == n) return true;
    }
    return false;
}

int n;
vector<int> arr;
vector<bool> visited;

void ring(int step){
    if (step == n){
        if (is_prime(arr[n-1] + arr[0])){
            cout << 1;
            for (int i=1; i<(int)arr.size(); i++){
                cout << " " << arr[i];
            }
            cout << "\n";
        }
        return;
    }
    for (int i=2; i<=n; i++){
        if (!visited[i] && is_prime(arr[step - 1] + i)){
            arr.push_back(i);
            visited[i] = true;
            ring(step + 1);
            arr.pop_back();
            visited[i] = false;
        }
    }
    return;
}

void solve(){
    int count = 1;
    bool f = true;
    while (cin >> n){
        if (!f) cout << "\n";
        f = false;
        cout << "Case " << count << ":\n";
        count++;
        arr.clear();
        arr.push_back(1);
        visited.assign(n + 1, false);
        visited[1] = true;
        ring(1);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}