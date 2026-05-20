#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 0;
    for (int i = 0; i < 5; ++i) {
        if (i % 2 == 0) {
            y += x;
        } else {
            y -= x / 2;
        }
    }
    cout << y << endl;
    return 0;
}