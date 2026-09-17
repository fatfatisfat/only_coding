#include <bits/stdc++.h>
using namespace std;

void printarr(const vector<int>& arr){
    bool f = true;
    int len = arr.size();
    for (int i=0; i<len; i++){
        if (!f) cout << " ";
        f = false;
        cout << arr[i];
    }
    cout <<"\n";
    return;
}

void merge(vector<int>& arr, int left, int mid, int right){
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right){
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    int len = temp.size();
    for (int k=0; k<len; k++){
        arr[left + k] = temp[k];
    }

    printarr(arr);
    return;
}

void mergesort(vector<int>& arr, int left, int right){
    if (left >= right) return;

    int len = right - left + 1;
    int left_len = (len + 1) / 2;
    int mid = left + left_len - 1;

    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);

    merge(arr, left, mid, right);
    return;
}

int main(){
    int n;
    bool first_case = true;
    while (cin >> n){
        vector<int> arr(n);
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        if (!first_case) cout << "\n";
        first_case = false;
        mergesort(arr, 0, n-1);
    }
    return 0;
}