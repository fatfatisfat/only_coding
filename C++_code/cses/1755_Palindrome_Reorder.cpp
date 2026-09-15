#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<int> arr(26, 0);
    for (char c : s){
        int n = c - 'A';
        arr[n]++;
    }
    int index = -1;
    bool sol = true;
    for (int i=0; i<26; i++){
        if (arr[i] % 2 == 1){
            if (index != -1){
                sol = false;
                break;
            }
            index = i;
        }
    }
    if (!sol) cout << "NO SOLUTION";
    else {
        for (int i=0; i<26; i++){
            if (i != index){
                int n = arr[i] / 2;
                char c = (char)('A' + i);
                for (int j=0; j<n; j++){
                    cout << c;
                }
            }
        }
        for (int i=0; i<arr[index]; i++){
            char c = (char)('A' + index);
            cout << c;
        }
        for (int i=25; i>=0; i--){
            if (i != index){
                int n = arr[i] / 2;
                char c = 'A' + i;
                for (int j=0; j<n; j++){
                    cout << c;
                }
            }
        }
    }
}