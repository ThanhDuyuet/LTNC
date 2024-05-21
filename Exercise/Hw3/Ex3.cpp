#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string tmp1;
    tmp1 = tmp1 + s[0] + s[1];
    string tmp2;
    tmp2 = tmp2 + s[(int)s.length() - 2] + s[(int)s.length() - 1];
    if (tmp2 == "AM"){
        if (tmp1 == "12"){
            cout << "00";
            for (int i = 2; i < (int)s.length() - 2; i++) cout << s[i];
        }else{
            for (int i = 0; i < (int)s.length() -2; i++) cout << s[i];
        }
    }
    else{
        if (tmp1 != "12"){
        cout << stoi(tmp1) + 12;
        for (int i = 2; i < (int)s.length() - 2; i++) cout << s[i];}
        else  for (int i = 0; i < (int)s.length() -2; i++) cout << s[i];
    }
    return 0;
}

