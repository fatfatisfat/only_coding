#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while (getline(cin, s)){
        stack<char> arr;
        for (char c : s){
            if (!arr.empty() && c == arr.top()){
                arr.pop();
            }else {
                arr.push(c);
            }
        }
        if (arr.empty()) cout << "SUCCESS\n";
        else cout << "FAIL\n";
    }
}