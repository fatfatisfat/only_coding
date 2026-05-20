#include <iostream>
using namespace std;

int compute(int x) {
    if (x <= 1) return 1;
    return x * compute(x - 2);
}

int main() {
    int result = compute(5);
    cout << result << endl;
    return 0;
}