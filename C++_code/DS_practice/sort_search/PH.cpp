#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    int count = 0;
    while (cin >> n){
        count++;
        if (n == 0) break;
        cin >> m;
        vector<int> select(n, numeric_limits<int>::max());
        vector<int> perfect;
        int temp;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cin >> temp;
                if (abs(temp - m) < select[i]) select[i] = abs(temp - m);
                perfect.push_back(abs(temp - m));
            }
        }
        sort(perfect.begin(), perfect.end());
        int psum = 0;
        int ssum = 0;
        for (int i=0; i<n; i++){
            psum += perfect[i];
            ssum += select[i];
        }
        cout << "Case " << count << ": " << psum << " VS. " << ssum << endl;
        if (psum == ssum) cout << "Perfect Teammate.\n";
        else cout << "Just Teammate.\n";
    }
}