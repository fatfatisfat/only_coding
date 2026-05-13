#include <bits/stdc++.h>
using namespace std;

void solution(long n, long m, int count){
    int sum = 1;
    long k = n;
    while (n != 1 && n <= m){
        if (n % 2 == 0){
            n /= 2;
            sum++;
        }else if (n % 2 == 1){
            n = n * 3 + 1;
            if (n <= m) sum++;
        }
    }
    cout << "Case " << count << ": K = " << k << ", limit = " << m << ", number of terms = " << sum << "\n";
    return;
}

int main(){
    long n, m;
    int count = 1;
    while (cin >> n >> m){
        if (n == -1 && m == -1) break;
        solution(n, m, count);
        count++;
    }
    return 0;
}