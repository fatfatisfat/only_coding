#include <bits/stdc++.h>

using namespace std;

int pri(char c){
    if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return 0;
}

int main(){
    string line;
    vector<string> arr;
    stack<char> cal;
    getline(cin, line);
    for (char c : line){
        if (isdigit(c)){
            arr.push_back(string(1, c));
        }else if (c == '('){
            cal.push(c);    
        }else if (c == ')'){
            while (!cal.empty() && cal.top() != '('){
                arr.push_back(string(1, cal.top()));
                cal.pop();
            }
            cal.pop();
        }else {
            while (!cal.empty() && pri(c) <= pri(cal.top())){
                arr.push_back(string(1, cal.top()));
                cal.pop();
            }
            cal.push(c);
        }
    }
    while (!cal.empty()){
        arr.push_back(string(1, cal.top()));
        cal.pop();
    }
    for (string s : arr) cout << s << " ";
    cout << "\n";
    while (arr.size() > 1){
        for (int i=0; i<arr.size(); i++){
            string s = arr[i];
            if (s == "+" || s == "-" || s == "*" || s == "/"){
                int n1 = stoi(arr[i-2]);
                int n2 = stoi(arr[i-1]);
                int ans;
                if (s == "+") ans = n1 + n2;
                else if (s == "-") ans = n1 - n2;
                else if (s == "*") ans = n1 * n2;
                else if (s == "/") ans = n1 / n2;

                arr.erase(arr.begin() + i - 2, arr.begin() + i + 1);
                arr.insert(arr.begin() + i - 2, to_string(ans));

                for (string s : arr) cout << s << " ";
                cout << "\n";
                break;
            }
        }
    }
    return 0;
}