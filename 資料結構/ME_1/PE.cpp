#include <bits/stdc++.h>
using namespace std;

queue<int> fir(queue<int> arr){
    int len = arr.size();
    for (int i=0; i<len; i++){
        if (i % 2 == 0) arr.push(arr.front());
        arr.pop();
    }
    return arr;
}

queue<int> sec(queue<int> arr){
    int len = arr.size();
    if (len % 2 == 0){
        for (int i=0; i<len; i++){
            if (i % 2 == 1) arr.push(arr.front());
            arr.pop();
        }
    }else {
        for (int i=0; i<len; i++){
            if (i % 2 == 0) arr.push(arr.front());
            arr.pop();
        }
    }
    return arr;
}

void solution(int n){
    queue<int> first;
    queue<int> second;
    for (int i=0; i<=n; i++){
        first.push(i);
    }
    int count;
    while(true){
        if ((int)first.size() == 1) break;
        count = 1;
        second = fir(first);
        if ((int)second.size() == 1) break;
        count = 2;
        first = sec(second);
    }
    if ((int)first.size() == 1){
        cout << first.front() << endl;
    }else {
        cout << second.front() << endl;
    }
}

int main(){
    int n;
    while (cin >> n){
        solution(n);
    }
}