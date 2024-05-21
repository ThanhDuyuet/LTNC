#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0 ; i < s.length(); i++){
        if (int(s[i]) >= 65 && int(s[i]) <= 90) ans++;
    }
    cout << ans + 1;
    return 0;
}

