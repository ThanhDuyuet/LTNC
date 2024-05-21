#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;
    cin >> k;
    for (int i = 0 ; i < s.length(); i++){
        if (isalpha(s[i])){
            int x = int(s[i]);
            if (x >= 65 && x <= 90){
                x = x + k % 26;
                if (x > 90) x = x - 90 + 64;
                s[i] = char(x);
            }
            else{
                x = x + k % 26;
                if (x > 122) x = x - 122 + 96;
                s[i] = char(x);
            } 
        }
    }
    cout << s;
    return 0;
}

