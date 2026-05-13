#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n;
    while (cin >> m >> n){
        vector<int> gift(m);
        vector<int> price(n);
        for (int i=0; i<m; i++) cin >> gift[i];
        for (int i=0; i<n; i++) cin >> price[i];
        sort(gift.begin(), gift.end());
        sort(price.begin(), price.end());
        long long sum = 0;
        int low = 0;
        for (int p : price){
            for (int i=low; i<m; i++){
                if (gift[i] >= p){
                    sum += gift[i];
                    low = i;
                    break;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}