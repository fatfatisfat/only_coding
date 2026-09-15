#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(int index, vector<int> arr, int cur_sum, int sum){
    if (index == arr.size()) return abs(cur_sum - (sum - cur_sum));
    int sum1 = solve(index+1, arr, cur_sum+arr[index], sum);
    int sum2 = solve(index+1, arr, cur_sum, sum);
    return min(sum1, sum2);
}

signed main(){
    int n;
    cin >> n;
    vector<int> arr;
    int sum = 0;
    for (int i=0; i<n; i++){
        int num;
        cin >> num;
        sum += num;
        arr.push_back(num);
    }
    int ans = solve(0, arr, 0, sum);
    cout << ans;
    return 0;
}