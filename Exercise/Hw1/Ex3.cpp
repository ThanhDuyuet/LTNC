#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin , s);
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        cout << tmp << endl;
    }
    return 0;
}

