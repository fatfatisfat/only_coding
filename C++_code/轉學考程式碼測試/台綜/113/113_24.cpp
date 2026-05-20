#include <iostream>
using namespace std;

void recursiveFunction(int* arr, int n) {
    if (n == 0) return;
    cout << arr[n-1] << " ";
    recursiveFunction(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    recursiveFunction(arr, 5);
    return 0;
}