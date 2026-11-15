#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void merge(int left, int right, int mid){
    int left_ptr = left;
    int right_ptr = mid + 1;
    vector<int> temp;
    while (left_ptr <= mid && right_ptr <= right){
        if (arr[left_ptr] > arr[right_ptr]){
            temp.push_back(arr[right_ptr++]);
        }else {
            temp.push_back(arr[left_ptr++]);
        }
    }
    while (left_ptr <= mid) temp.push_back(arr[left_ptr++]);
    while (right_ptr <= right) temp.push_back(arr[right_ptr++]);

    int len = temp.size();
    for (int i=0; i<len; i++){
        arr[i + left] = temp[i];
    }

    len = arr.size();
    for (int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
}

void merge_sort(int left, int right){
    if (left >= right) return;

    int len = right - left + 1;
    int left_len = (len + 1) / 2;
    int mid = left + left_len - 1;

    merge_sort(left, mid);
    merge_sort(mid + 1, right);

    merge(left, right, mid);
}

void solve(){
    int n;
    while (cin >> n){
        arr.clear();
        for (int i=0; i<n; i++){
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        merge_sort(0, n - 1);
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}