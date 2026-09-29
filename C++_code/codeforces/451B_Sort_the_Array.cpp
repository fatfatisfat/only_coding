#include <bits/stdc++.h>
using namespace std;

bool reverse(int left, int right, vector<int>& arr){
    int t = (left + right) / 2 + 1;
    while (t--){
        swap(arr[left++], arr[right--]);
    }
    bool sorted = true;
    for (int i=0; i<arr.size(); i++){
        if (arr[i] != i + 1){
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
    for (int i=0; i<t; i++){
        if (arr[i] != i + 1){
            if (left == -1) left = i;
            else{
                right = i;
                break;
            }
            sorted = false;
        }
    }
    if (sorted){
        cout << "yes\n" << "1 1";
    }else {
        sorted = reverse(left, right, arr);
        if (sorted){
            cout << "yes\n" << left+1 << " " << right+1;
        }else {
            cout << "no";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
