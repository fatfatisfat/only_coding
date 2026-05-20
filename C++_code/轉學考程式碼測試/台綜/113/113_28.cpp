#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int *ptr = arr;
    
    ptr += 2;
    cout << *ptr + *(ptr + 2) << endl;
    return 0;
}