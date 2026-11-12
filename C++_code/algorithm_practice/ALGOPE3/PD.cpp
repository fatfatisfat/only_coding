#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
vector<bool> visited;

bool is_prime(int num){
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int c : primes){
        if (c == num) return true;
    }
    return false;
}

void dfs(int step){
    if (step == n){
        if (is_prime(arr[n-1] + arr[0])){
            for (int i=0; i<arr.size(); i++){
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
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
}

void solve(){
    int count = 1;
    while (cin >> n){
        cout << "Case " << count << ":\n";
        arr.clear();
        visited.assign(n + 1, false);
        arr.push_back(1);
        visited[1] = true;
        dfs(1);
        cout << "\n";
        count++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}