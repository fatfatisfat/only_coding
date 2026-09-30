#include <bits/stdc++.h>
using namespace std;

bool do_reverse(int left, int right, vector<int>& arr){
    while (left < right){
        swap(arr[left++], arr[right--]);
    }
    bool sorted = true;
    for (int i=0; i<(int)arr.size()-1; i++){
        if (arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

void solve(){
    int t;
    cin >> t;
    vector<int> arr(t);
    for (int i=0; i<t; i++){
        cin >> arr[i];
    }
    bool sorted = true;
    int left = -1, right = -1;
    for (int i=0; i<t-1; i++){
        if (left == -1 && arr[i] > arr[i + 1]){
            left = i;
            right = i + 1;
            sorted = false;
        }
        if (left != -1 && arr[i] < arr[i + 1]) break;
        right = i + 1;
    }
    if (sorted){
        cout << "yes\n" << "1 1";
    }else {
        sorted = do_reverse(left, right, arr);
        if (sorted){
            cout << "yes\n" << left+1 << " " << right+1;
        }else {
            cout << "no";
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
