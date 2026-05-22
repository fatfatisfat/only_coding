#include <bits/stdc++.h>
using namespace std;

vector<int> erase_zero(vector<int> arr){
    int len = arr.size();
    vector<int> temp;
    for (int i=0; i<len; i++){
        if (arr[i] != 0) temp.push_back(arr[i]);
    }
    return temp;
}

void solve(int n){
    vector<int> arr;
    for (int i=1; i<=n; i++){
        arr.push_back(i);
    }
    bool dir = true;
    while (arr.size() != 1){
        if (dir){
            dir = false;
            for (int i=0; i<(int)arr.size(); i++){
                if (i % 2 == 0){
                    arr[i] = 0;
                }
            }
            arr = erase_zero(arr);
        }else {
            dir = true;
            int count = 1;
            for (int i=arr.size()-1; i>=0; i--){
                if (count % 2 == 1){
                    arr[i] = 0;
                }
                count++;
            }
            arr = erase_zero(arr);
        }
    }
    cout << arr[0] << endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n){
        solve(n);
    }
}

/*
 2 4 6 8 
*/