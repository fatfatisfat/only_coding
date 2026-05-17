#include <bits/stdc++.h>

using namespace std;

void findroutes(int index, int n, vector<int> tree, vector<bool> isnone, vector<int> route, int sum){
    if (index >= n || isnone[index]) return;
    if (!isnone[index]){
    route.push_back(index);
    sum += tree[index];        
    }
    bool left = (2 * index + 1 < n && !isnone[2 * index + 1]);
    bool right = (2 * index + 2 < n && !isnone[2 * index + 2]);
    if (!left && !right){
        cout << "The route " << route[0];
        for (int i=1; i<route.size(); i++){
            cout << "->" << route[i];
        }
        cout << " took " << sum << "." << endl;
        return;
    }
    findroutes(index*2+1, n, tree, isnone, route, sum);
    findroutes(index*2+2, n, tree, isnone, route, sum);
}

int main(){
    string line;
    while (getline(cin, line)){
        stringstream ss(line);
        vector<int> treenums;
        string val;
        vector<bool> isnone;
        while (ss >> val){
            if (val == "None"){
                treenums.push_back(-1);
                isnone.push_back(true);
            }else {
                treenums.push_back(stoll(val));
                isnone.push_back(false);
            }
        }
        int n = treenums.size();
        findroutes(0, n, treenums, isnone, {}, 0);
    }
}