#include<bits/stdc++.h>

using namespace std;

bool palindrome(string s){
    for (int i = 0; i < (int)s.length() / 2; i++)
        if (s[i] != s[(int)s.length() - 1 - i]) return false;
    return true;
}

int solve(string s){
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < (int)s.length() / 2; i++){
        if (s[i] != s[(int)s.length() - 1 - i]){
            idx1 = i;
            idx2 = (int)s.length() - 1 - i;
            break;
        }
    }
    if (idx1 == -1) return -1;
    s.erase(s.begin() + idx1);
    if (palindrome(s)) return idx1;
    else return idx2;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}

