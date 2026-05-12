#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    while (getline(cin, line)){
        stringstream ss(line);
        vector<long long> tree;
        vector<bool> isnone;
        string val;
        while (ss >> val){
            if (val == "None"){
                tree.push_back(0);
                isnone.push_back(true);
            }else {
                tree.push_back(stoll(val));
                isnone.push_back(false);
            }
        }
        int n = tree.size();
        for (int i=n-1; i>=0; i--){
            if (isnone[i]) continue;
            else {
                int left = 2 * i + 1;
                int right = 2 * i + 2;
                if (left < n && !isnone[left]) tree[i] += tree[left];
                if (right < n && !isnone[right]) tree[i] += tree[right];                
            }
        }
        long long m = 0;
        for (int i=1; i<n; i++){
            if (isnone[i]) continue;

            long long n1 = tree[i];
            long long n2 = tree[0] - n1;

            m = max(n1 * n2, m);
        }
        cout << m << endl;
    }
    return 0;
}