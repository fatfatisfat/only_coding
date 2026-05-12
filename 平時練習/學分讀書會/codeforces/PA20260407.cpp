#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string blank;
    cin >> t;
    while (t-- > 0){
        int n, k;
        cin >> n >> k;
        getline(cin, blank);
        string line;
        getline(cin, line);
        stringstream s(line);
        int sum = 0;
        int ss;
        while (s >> ss){
            sum += ss;
        }
        if (sum % 2 == 1){
            cout << "YES\n";
        }else if (n % 2 == 0 || k % 2 == 0){
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}