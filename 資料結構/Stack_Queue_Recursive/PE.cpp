#include <bits/stdc++.h>
using namespace std;

void gease(int n){
    queue<int> inputs;
    int input;
    string s;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> input){
        inputs.push(input);
    }
    queue<int> pro;
    int len = inputs.size();
    while (pro.size() != len){
        if (pro.size() < n){
            pro.push(inputs.front());
            inputs.pop();
        }else if (pro.front() > inputs.front()){
            pro.push(pro.front());
            inputs.push(inputs.front());
            pro.pop();
            inputs.pop();
            n++;
        }else if (inputs.front() > pro.front()){
            pro.push(inputs.front());
            inputs.push(pro.front());
            pro.pop();
            inputs.pop();
            n++;
        }
    }
    while (!pro.empty()){
        cout << pro.front() << " ";
        pro.pop();
    }
    cout << endl;
    return;
}

int main(){
    int n;
    while (cin >> n && n != 0){
        cin.ignore();
        gease(n);
    }
}