#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    while (cin >> n >> k){
        vector<int> lev;
        for (int i=0; i<n; i++){
            int a;
            cin >> a;
            lev.push_back(a);
        }
        sort(lev.begin(), lev.end());
        vector<int> gap;
        for (int i=0; i<n-1; i++){
            gap.push_back(abs(lev[i] - lev[i+1]));
        }
        sort(gap.begin(), gap.end());
        int sum = 0;
        for (int i=0; i<k; i++){
            sum += gap[i];
        }
        cout << sum << endl;
    }
}