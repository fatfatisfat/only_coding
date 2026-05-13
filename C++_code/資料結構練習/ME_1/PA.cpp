#include <bits/stdc++.h>
using namespace std;

void solution(){
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col, 0));
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    for (int i=0; i<n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = 0;
        for (int j=x1; j<=x2; j++){
            for (int k=y1; k<=y2; k++){
                sum += arr[j][k];
            }
        }
        cout << sum << endl;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    while (n--){
        solution();
    }
    return 0;
}