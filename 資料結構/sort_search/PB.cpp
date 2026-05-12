#include <bits/stdc++.h>
using namespace std;

void printarr(vector <int> arr){
    int len = arr.size();
    for (int i=0; i<len-1; i++){
        cout << arr[i] << " ";
    }
    cout << arr[len-1] << endl;
    return;
}

int main() {
    int m, n;
    while(cin >> m >> n){
        vector<int> arr(m);
        for (int i=0; i<m; i++){
            cin >> arr[i];
        }
        cout << 1 << endl;
        vector<int> v1 = arr;
        for (int i=0; i<m && i<=n; i++){
            int key = v1[i];
            int j = i-1;
            while (j >= 0 && v1[j] < key){
                
            }
        }
    }
    return 0;
}
