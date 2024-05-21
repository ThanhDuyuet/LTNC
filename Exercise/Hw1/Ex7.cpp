#include <bits/stdc++.h>

using namespace std;

int main(){
    int pos = 0, nega = 0, zero = 0;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > 0) pos++;
        else{
            if (x == 0) zero++;
            else nega++;
        }
    }
    cout << (double)pos / n << endl;
    cout << (double)nega / n << endl;
    cout << (double)zero / n << endl;
    return 0;
}

