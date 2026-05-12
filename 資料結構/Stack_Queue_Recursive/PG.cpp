#include <bits/stdc++.h>
using namespace std;

void solution(int n){
    int sum = 1;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            sum++; 
        } 
        else {
            n = 3 * n + 1;
            sum++;
        }
    }
    cout << sum << endl;
}

int main(){
    int n;
    while (cin >> n){
        solution(n);
    }
}