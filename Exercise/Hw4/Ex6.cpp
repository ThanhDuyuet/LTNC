#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int lcm(int a, int b){return a * b / gcd(a, b);
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0 ; i < m; i++) cin >> v2[i];
    int tmp1 = v1[0], tmp2 = v2[0];
    for (int i = 0; i < n; i++) tmp1 = lcm(tmp1, v1[i]);
    for    (int i = 0; i < m; i++) tmp2 = gcd(tmp2, v2[i]);
    int ans = 0;
    if (tmp2 % tmp1 == 0){
    for (int i = tmp1; i <= tmp2; i++){
        if (tmp2 % i == 0 && i % tmp1 == 0) ans++;
    }}
    cout << ans;
    return 0;
}

