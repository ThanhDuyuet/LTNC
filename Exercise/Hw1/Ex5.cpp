#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);
    int max = INT_MIN;
    for (int i = 0; i < 4; i++){
        cin >> v[i];
        if (max < v[i]) max = v[i];
    }
    cout << max;
    return 0;
}

