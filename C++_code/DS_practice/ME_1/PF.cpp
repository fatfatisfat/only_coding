#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    vector<int> arr;
    for (int i=1; i<=n; i++){
        arr.push_back(i);
    }
    bool dir = true;
    while (arr.size() != 1){
        vector<int> temp;
        int count = 1;
        if (dir){
            dir = false;
            for (int i=0; i<(int)arr.size(); i++){
                if (count % 2 == 1){
                    temp.push_back(arr[i]);
                }
                count++;
            }
            arr = temp;
        }else {
            dir = true;
            for (int i=arr.size()-1; i>=0; i--){
                if (count % 2 == 1){
                    temp.push_back(arr[i]);
                }
                count++;
            }
            arr = temp;
        }
    }
    cout << arr[0];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n){
        solve(n);
    }
}

/*
 2 4 6 8 
*/