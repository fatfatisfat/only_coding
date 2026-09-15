#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, string from, string to, string aux){
    if (n == 0) return;

    hanoi(n-1, from, aux, to);

    cout << from << " " << to << "\n";

    hanoi(n-1, aux, to, from);
}

int main(){
    int n;
    cin >> n;
    int sum = (int)(pow(2, n) - 1);
    cout << sum << '\n';
    hanoi(n, "1", "3", "2");
}