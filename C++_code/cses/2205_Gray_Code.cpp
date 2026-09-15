#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> arr = {"1", "0"};
    for (int i=2; i<=n; i++){
        int len = arr.size();
        for (int i=len-1; i>=0; i--){
            arr.push_back("0" + arr[i]);
        }
        for (int i=0; i<len; i++){
            arr[i] = "1" + arr[i];
        }
    }
    int len = arr.size();
    for (int i=0; i<len; i++){
        cout << arr[i] << "\n";
    }
}