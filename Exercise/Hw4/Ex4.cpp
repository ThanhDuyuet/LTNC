#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[1000] = {0};
    int n, x;
    cin >> n;
    int ans = INT_MIN;
    for (int i = 0 ; i < n; i++){
        cin >> x;
        a[x]++;
        ans = max(ans, a[x]);
    }
    cout << n - ans;
    return 0;
}

