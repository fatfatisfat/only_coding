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

void dfs(int step){
    if (step == n){
        if (is_prime(arr[n-1] + arr[0])){
            for (int i=0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        return;
    }
    for (int i=2; i<=n; i++){
        if (!visited[i] && is_prime(arr[step - 1] + i)){
            arr.push_back(i);
            visited[i] = true;
            dfs(step + 1);
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
        arr.clear();
        visited.assign(n + 1, false);
        arr.push_back(1);
        visited[1] = true;
        dfs(1);
        count++;
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}