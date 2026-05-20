#include <iostream>
using namespace std;

void pointerManipulation(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += i;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    pointerManipulation(numbers, 5);
    cout << numbers[2] << " " << numbers[4] << endl;
    return 0;
}