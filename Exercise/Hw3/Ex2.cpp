#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s = "#";
    for (int i = 0 ; i < n - 1; i++){
        s = ' ' + s;
    }
    for (int i = 0 ; i < n; i++){
        cout << s << endl;
        s.erase(s.begin());
        s = s + '#';
    }
    return 0;
}

