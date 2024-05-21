#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (i) v[i] = v[i] + v[i - 1];
        }
        bool check = false;
        for (int i = 0; i < n; i++){
            if (i == 0){
                if (v[n - 1] - v[i] == 0) check = true;
            }
            else{
            if (v[n - 1] - v[i] == v[i - 1]){
                check = true;
                break;
            }}
        }
        if (check){
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}

