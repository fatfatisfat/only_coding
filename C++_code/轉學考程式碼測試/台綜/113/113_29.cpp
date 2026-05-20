#include <iostream>
using namespace std;

void increment(int &x) {
    x++;
}

void square(int &x) {
    x *= x;
}

void reset(int x) {
    x = 1;
}

int main() {
    int a = 3;
    increment(a);
    reset(a);
    square(a);
    cout << a << endl;
    return 0;
}