#include <bits/stdc++.h>
using namespace std;

bool paste(int n, int p, int h, const vector<int>& wood, const vector<int>& post){
    if (p == 0) return true;
    if (h == 0) return true;
    int wide = 0;
    int postnum = 0;
    for (int i=0; i<n; i++){
        if (h <= wood[i]) wide++;
        else wide = 0;
        if (wide >= post[postnum]){
            wide -= post[postnum];
            postnum++;
            if (postnum == p) return true;
        }
    }
    return postnum == p;
}

int main(){
    int n, p;
    while (cin >> n >> p){
        int high = 0;
        vector<int> wood(n);
        for (int i=0; i<n; i++){
            cin >> wood[i];
            high = max(wood[i], high);
        }
        vector<int> post(p);
        for (int i=0; i<p; i++){
            cin >> post[i];
        }
        int low = 0;
        int ans = 0;
        while (high >= low){
            int mid = low + (high - low) / 2;
            if (paste(n, p, mid, wood, post)){
                low = mid + 1;
                ans = mid;
            } 
            else high = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}