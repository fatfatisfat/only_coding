#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int t=0; t<n; t++){
        int num;
        cin >> num;
        cin.ignore();
        string s = "Hello";
        for (int i=0; i<num; i++){
            string name;
            getline(cin, name);
            s += " ";
            s += name;
            if (i != num-1) s += ",";
        }
        cout << s << "\n";
    }
    return 0;
}