#include<bits/stdc++.h>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<long long> arr;
    long long val;
    while (ss >> val){
        arr.push_back(val);
    }
    long long q;
    while (cin >> q){
        unordered_map<long long, int> map;
        map[0] = -1;

        long long sum = 0;
        int min_len = arr.size() + 1;

        for (int i=0; i<(int)arr.size(); i++){
            sum += arr[i];

            long long target = sum - q;

            if (map.count(target)){
                int len = i - map[target];
                min_len = min(min_len, len);
            }
            map[sum] = i;
        }
        if (min_len > (int)arr.size()) cout << 0 << endl;
        else cout << min_len << endl;
    }
    return 0;
}