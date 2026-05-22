#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> nums;
    int temp, grade;
    for (int i=0; i<n; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    cin >> grade;
    vector<int> group_a = {1};
    vector<int> group_b = {1};
    for (int i=0; i<n; i++){
        if (group_a[0] * nums[i] && grade % (group_a[0] * nums[i]) == 0){
            group_a.push_back(nums[i]);
            group_a[0] *= nums[i];
        }else if (group_b[0] * nums[i] && grade % (group_b[0] * nums[i]) == 0){
            group_b.push_back(nums[i]);
            group_b[0] *= nums[i];
        }
    }
    if (group_a[0] == grade && group_b[0] == grade){
        cout << "T" << endl;
    }else {
        cout << "F" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solve();
    }
}