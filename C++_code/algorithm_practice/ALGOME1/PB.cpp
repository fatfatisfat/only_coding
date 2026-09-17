#include <bits/stdc++.h>
using namespace std;

bool check(int mid, const vector<int> w, const vector<int> p){
    int count = 0, index = 0;
    for (int i=0; i<w.size(); i++){

    }
}

void solve(vector<int> w, vector<int> p){
    int up = INT_MIN, down = 0;
    for (int i=0; i<w.size(); i++) up = max(up, w[i]);
    while (up > down){
        int mid = (up + down) / 2;
        if (check(mid, w, p)){

        }
    }
}

int main(){
    int w, p;
    while (cin >> w >> p){
        vector<int> wood(w);
        vector<int> post(p);
        for (int i=0; i<w; i++) cin >> wood[i];
        for (int i=0; i<p; i++) cin >> post[i];
        solve(wood, post);
    }
}