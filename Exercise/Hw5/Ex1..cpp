#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(int* ptr1, int* ptr2){
    int a = *ptr1;
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = abs(a - *ptr2);
}

int main() {
    int a, b;
    cin >> a >> b; 
    solve(&a, & b);
    cout << a << endl << b;
    return 0;
}

