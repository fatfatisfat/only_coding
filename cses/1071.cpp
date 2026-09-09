#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        int layer = max(x, y);
        if (x == 1 && y == 1) cout << 1 << '\n';
        else if (x > y){
            if (layer % 2 == 1){
                cout << (layer-1) * (layer-1) + y << '\n';
            }else {
                cout << layer * layer - y + 1 << '\n';
            }
        }else{
            if (layer % 2 == 0){
                cout << (layer-1) * (layer-1) + x << '\n';
            }else {
                cout << layer * layer - x + 1 << '\n';
            }
        }
    }
}