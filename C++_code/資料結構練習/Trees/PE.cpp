#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t1, t2;
    while (cin >> n >> t1 >> t2){
        string line;
        getline(cin, line);
        map<int, int> tree;
        set<int> has_parent;
        for (int i=0; i<n; i++){
            getline(cin, line);
            stringstream ss(line);
            int head, num;
            ss >> head;
            while (ss >> num){
                tree[num] = head;
                has_parent.insert(num);
            }
        }
        int d1 = 0, d2 = 0, temp;
        temp = t1;
        while (tree.count(temp)){
            d1++;
            temp = tree[temp];
        }
        temp = t2;
        while (tree.count(temp)){
            d2++;
            temp = tree[temp];
        }
        int count = 0;
        if (d1 > d2){
            for (int i=0; i<d1-d2; i++){
                t1 = tree[t1];
                count++;
            }
        }else if (d2 > d1){
            for (int i=0; i<d2-d1; i++){
                t2 = tree[t2];
                count++;
            }
        }
        while (t1 != t2){
            count += 2;
            t1 = tree[t1];
            t2 = tree[t2];
        }
        cout << count << "\n";
    }
    return 0;
}