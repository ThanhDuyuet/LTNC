#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    int k = p / 2;
    int t = n / 2;
    if (t - k < k) cout << t - k;
    else cout << k;
    return 0;
}

