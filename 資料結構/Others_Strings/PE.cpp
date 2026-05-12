#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int a=0; a<t; a++){
        int n;
        cin >> n;
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        long long sum = 0;
        for (int i=0; i<n; i++){
            int num;
            cin >> num;
            if (maxHeap.empty() || num <= maxHeap.top()){
                maxHeap.push(num);
            }else {
                minHeap.push(num);
            }

            if (maxHeap.size() > minHeap.size() + 1){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }else if (minHeap.size() > maxHeap.size()){
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }

            long long median;
            int cur_size = i + 1;
            if (cur_size % 2 == 1){
                median = maxHeap.top();
            }else {
                median = ((long long)maxHeap.top() + minHeap.top()) / 2;
            }
            sum += median;
        }
        cout << sum << endl;
    }
}