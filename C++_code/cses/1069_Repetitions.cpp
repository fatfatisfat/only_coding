#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string line;
    cin >> line;
    char cur = '0';
    int count = 0;
    int m = 0;
    for (char c : line){
        if (c != cur){
            m = max(m, count);
            count = 1;
            cur = c;
        }else {
            count++;
        }
    }
    m = max(m, count);
    cout << m;
}