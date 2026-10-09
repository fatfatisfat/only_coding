#include <bits/stdc++.h>
using namespace std;

vector<char> arr = {'a', 'c', 'z', 'a', 'q', 's', 'd', 'f', 'y', 'g', 'h', 'j', 'b', 'v', 'u', 'i', 'q', 'w', 's', 'e', 't', 'x', 'w', 'x', 'r', 'z', 'o', 'p', 'k', 'l', 'n', 'm', ',', '[', '9', '0'};
vector<char> signs = {'[', ']', ';', '\'', ',', '.', '/', '\\', '-', '='};
vector<char> number = {'8', '1', '`', '1', '2', '3', '4', '5', '6', '7'};

int find_sign(char c){
    for (int i=0; i<(int)signs.size(); i++){
        if (signs[i] == c) return i;
    }
    return 0;
}

void solve(){
    string s;
    while (getline(cin, s)){
        string ans = "";
        for (char c : s){
            if (c >= 'a' && c <='z') ans += arr[c - 'a'];
            else if (c >= '0' && c <='9') ans += number[c - '0'];
            else if (c == ' ') ans += " ";
            else ans += arr[26 + find_sign(c)];
        }
        cout << ans << "\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}