#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    long l = 0;
    long count = 0;
    for (int i=0; i<n; i++){
        long num;
        cin >> num;
        if (num < l){
            count += l - num;
        }else {
            l = num;
        }
    }
    cout << count;
}