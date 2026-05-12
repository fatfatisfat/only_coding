#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int m){
    int sum = 0;
    while (n > 0){
        sum = sum * 2 + 1;
        n--;
    }
    sum *= m;
    cout << sum << endl;
}

int main(){
    int n, m;
    while (cin >> n){
        cin >> m;
        hanoi(m, n);
    }
}