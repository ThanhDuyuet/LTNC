#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first_name, last_name;
    int standard;
};
int main() {
     Student a;
     cin >> a.age;
     cin.ignore();
     cin >> a.first_name >> a.last_name;
     cin >> a.standard;
     cout << a.age << " " << a.first_name << " " << a.last_name << " " << a.standard;
    return 0;
}

