#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    int k;
    for (int i = 0; i < n; i++){
        cin >> k;
        vector<int> tmp(k);
        for (int j = 0 ; j < k; j++){
            cin >> tmp[j];
        }
        v.push_back(tmp);
    } 
    int x, y;
    for (int i = 0 ; i < m; i++){
        cin >> x >> y;
        cout << v[x][y] << endl;
    }
    return 0;
}

