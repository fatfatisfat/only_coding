#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string skip;
    getline(cin, skip);
    for (int i=0; i<n; i++){
        string s;
        getline(cin, s);
        int sum = 0;
        int count = 1;
        for (char c : s){
            if (c == 'O'){
                sum += count;
                count++;
            }else {
                count = 1;
            }
        }
        cout << sum << endl;
    }
}