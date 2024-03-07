#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    bool check = false;
    //cout << x2 - x1 << " " << v1 - v2 << endl;
    if (v1 - v2 == 0){
        cout << "NO";
        return 0;
    }
    if ((x2 - x1) % (v1 - v2) == 0){
        if ((x2 - x1) / (v1 - v2) > 0) check = true;
    }
    if (check) cout << "YES";
    else cout << "NO";
    return 0;
}

