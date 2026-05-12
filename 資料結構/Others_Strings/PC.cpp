#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    while (cin >> s1 >> s2){
        vector<char> c1;
        vector<char> c2;
        for (char c : s1) c1.push_back(c);
        for (char c : s2) c2.push_back(c);
        int count = 0;
        for (int i=0; i<c1.size(); i++){
            if (c1[i] != c2[i]) count++;
        }
        if (count <= 2) cout << "True" << endl;
        else cout << "False" << endl;
    }
}