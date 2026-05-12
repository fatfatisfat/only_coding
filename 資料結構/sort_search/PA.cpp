#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(cin >> s){
        bool print = false;
        int len = s.length();
        for(int i=1; i<len; i++){
            if(len % i != 0) continue;
            vector <string> arr;
            for(int j=0; j<len; j+=i){
                arr.push_back(s.substr(j, i));
            }
            sort(arr.begin(), arr.end());
            string re;
            for (string st : arr){
                re += st;
            }
            if (re == s) continue;
            print = true;
            cout << re << endl;
        }
        if (!print) cout << "orz" << endl;
    }
    return 0;
}