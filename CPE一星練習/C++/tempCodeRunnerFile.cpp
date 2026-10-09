#include <bits/stdc++.h>
using namespace std;

int main(){
    string line1, line2;
    while (getline(cin, line1)){
        getline(cin, line2);
        vector<int> arr1(27, 0);
        vector<int> arr2(27, 0);

        for (char c : line1){
            int n = c - 'a';
            arr1[n]++;
        }
        for (char c : line2){
            int n = c - 'a';
            arr2[n]++;
        }

        for (int i=1; i<=26; i++){
            int count = min(arr1[i], arr2[i]);
            char c = (char)('a' + i);
            for (int i=0; i<count; i++){
                cout << c;
            }
        }
        cout << "\n";
    }
}