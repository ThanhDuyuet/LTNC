#include<bits/stdc++.h>

using namespace std;

const string check = "hackerrank";

bool solve(string s){
    int idx = 0;
    for (int i = 0 ; i < s.length(); i++){
        if (s[i] == check[idx]) idx++;
    }
    if (idx == check.length()) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if (solve(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

