#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    int k = n, ans = 0;
    while(n){
        if (n % 10){
            if (k % (n % 10) == 0) ans++;
        }
        n /= 10;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}

