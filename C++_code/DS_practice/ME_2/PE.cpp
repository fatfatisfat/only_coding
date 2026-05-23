#include <bits/stdc++.h>
using namespace std;

void solve(){
    string line;
    vector<long long> tree;
    getline(cin, line);
    stringstream ss(line);
    string s;
    while(ss >> s){
        tree.push_back(stoi(s));
    }
    vector<int> roots = {0};
    int len = tree.size();
    int depth = floor(log(len) / log(2)) + 1;
    bool f = true;
    for (int i=0; i<depth; i++){
        long long sum = 0;
        int root = roots.size();
        int count = 0;
        vector<int> next_level;
        for (int j=0; j<root; j++){
            if (roots[j] >= len) continue;
            sum += tree[roots[j]];
            if (tree[roots[j]] != 0){
                if (roots[j] * 2 + 1 < len)next_level.push_back(roots[j] * 2 + 1);
                if (roots[j] * 2 + 2 < len)next_level.push_back(roots[j] * 2 + 2);
                count++;
            }
        }
        double ave = 0;
        if (count == 0){
            ave = 0;
        }else {
            ave = (double)sum / count;
        }
        roots = next_level;
        /*
        cout << sum << " " << count << "\n";
        for (int j=0; j<roots.size(); j++){
            cout << roots[j] << " ";
        }
        cout << "\n";
        */
        if (!f) cout << " ";
        f = false;
        printf("%.5f", ave);
    }
    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
}