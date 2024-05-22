#include<bits/stdc++.h>

using namespace std;

int value, power, ans = 0;
void BackTrack(int pivot, int idx){
//    cout << pivot << " " << idx << endl;
    if (pivot == 0) return;
    for (int i = idx; i >= 1; i--){
        if (pow(i, power) == pivot){
            ans++;
            BackTrack(0, i - 1);
        }
        if (pow(i,power) < pivot){
            BackTrack(pivot - pow(i, power), i - 1);
        }
    }
}

int main(){
    cin >> value >> power;
    BackTrack(value, (int)pow(value, 1.0 / power));
    cout << ans;
    
    return 0; 
}

