#include <iostream>
#include <sstream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = (1 + n) * n / 2;
    for (int i=0; i<n-1; i++){
        long long num;
        cin >> num;
        sum -= num;
    }
   cout << sum;
}