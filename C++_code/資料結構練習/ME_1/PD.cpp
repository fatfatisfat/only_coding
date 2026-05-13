#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    queue<int> line;
    for (int i=0; i<n; i++){
        int t;
        cin >> t;
        line.push(t);
    }
    int loc, time = 0;
    cin >> loc;
    while (true){
        if (loc < 0) loc = (int)line.size() - 1;
        if (loc == 0 && line.front() - 1 == 0){
            time++;
            break;
        }else {
            if (line.front() == 0){
                line.pop();
                continue;
            }
            int temp = line.front() - 1;
            line.pop();
            if (temp > 0) line.push(temp);
            loc--;
            time++;
        }
    }
    cout << time << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solution();
    }
}