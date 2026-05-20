#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> arr){
    vector<int> ans;
    if (arr[0] > 0){
        ans.push_back(0);
        ans.push_back(arr[0]);
    }
    for (int i=1; i<=10005; i++){
        if (arr[i] != arr[i-1]){
            ans.push_back(i);
            ans.push_back(arr[i]);
        }
    }
    int len = ans.size();
    for (int i=0; i<len; i++){
        if (i != 0) cout << " ";
        cout << ans[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int left, right, h;
    vector<int> arr(20005, 0);
    while (cin >> left){
        cin >> h >> right;
        for (int i=left; i<right; i++){
            if (h > arr[i]) arr[i] = h;
        }
    }
    solution(arr);
}