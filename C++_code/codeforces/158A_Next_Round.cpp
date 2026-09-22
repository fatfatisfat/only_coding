#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    int count = 0;
    vector<int> arr;
    for (int i=0; i<t; i++){
        int score;
        cin >> score;
        arr.push_back(score);
    }
    n = arr[n-1];
    for (int i=0; i<t; i++){
        if (arr[i] < n) break;
        if (arr[i] >= n && arr[i] > 0) count++;
    }
    cout << count;
}