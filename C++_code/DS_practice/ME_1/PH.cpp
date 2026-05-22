#include <bits/stdc++.h>
using namespace std;

void solve(string line){
    stack<char> arr;
    for (char c : line){
        if (c != ')' && c != '}' && c != ']'){
            arr.push(c);
        }else {
            if (c == ')' && !arr.empty() && arr.top() == '(') arr.pop();
            else if (c == ']' && !arr.empty() && arr.top() == '[') arr.pop();
            else if (c == '}' && !arr.empty() && arr.top() == '{') arr.pop();
            else arr.push(c);
        }
        
    }
    if (arr.empty()){
        cout << "T" << "\n";
    }else {
        cout << "F" << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    while (cin >> line){
        solve(line);
    }
}