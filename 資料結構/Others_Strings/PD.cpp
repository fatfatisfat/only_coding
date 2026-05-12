#include<bits/stdc++.h>

using namespace std;

int main(){
    string line;
    vector<string> book;
    while (getline(cin, line) && line != "0"){
        string s = "";
        for (int i=0; i<(int)line.length(); i++){
            if (isalpha(line[i])){
                s += line[i];
            }else {
                if (!s.empty()){
                    bool f = false;
                    for (int j=0; j<(int)book.size(); j++){
                        if (s == book[j]){
                            cout << j+1;
                            book.erase(book.begin() + j);
                            book.insert(book.begin(), s);
                            f = true;
                            break;
                        }
                    }
                    if (!f){
                        cout << s;
                        book.insert(book.begin(), s);
                    }
                    s = "";
                }
                cout << line[i];
            }
        }
        if (!s.empty()){
            bool f = false;
            for (int j=0; j<book.size(); j++){
                if (s == book[j]){
                    cout << j+1;
                    book.erase(book.begin() + j);
                    book.insert(book.begin(), s);
                    f = true;
                    break;
                }
            }
            if (!f){
                cout << s;
                book.insert(book.begin(), s);
            }
            s = "";
        }
        cout << "\n";
    }
}