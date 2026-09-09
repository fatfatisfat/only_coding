#include <iostream>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    cin.ignore();
    string line;
    getline(cin, line);
    if (n < 2 * k){
        cout << -1 << endl;
    }else {
        int count = 0;
        for (int i=0; i<k; i++){
            if (line[i] != 'R'){
                count++;
            }
        }
        for (int i=n-1; i>=n-k; i--){
            if (line[i] != 'L'){
                count++;
            }
        }
        cout << count << endl;
    }
}

int main(){
    int n;
    cin >> n;
    while (n > 0){
        n--;
        solve();
    }
}