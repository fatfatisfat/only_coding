#include <iostream>
using namespace std;

void modifyArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    modifyArray(arr, 3);
    cout << arr[0] << " " << arr[2] << endl;
    return 0;
}