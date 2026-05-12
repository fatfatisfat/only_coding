#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)){
        stringstream ss(s);
        int temp;
        int sum = 1;
        while (ss >> temp){
            sum *= temp;
        }
        for (int i=0; i<sum; i++){
            cout << "Hello World\n";
        }
        cout << "\n";
    }
}