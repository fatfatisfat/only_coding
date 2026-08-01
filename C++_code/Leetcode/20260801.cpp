#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 5, 2};
    int num1 = 0, num2 = 0;
        int len = nums.size();
        for (int i=len-1; i>=0; i--){
            num1 += nums[i];
            i--;
            if (i<0) break;
            num2 += nums[i];
        }
        bool match = num1 >= num2;
        cout << match << endl;
        return 0;
}