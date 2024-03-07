#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0 ; i < n; i++) cin >> v[i];
    for (int i = 0 ; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((v[i] + v[j]) % k == 0) ans++; 
        }
    }
    cout << ans;
    return 0;
}

