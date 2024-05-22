#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int point1, point2, point3, point4, point5;
    public:
        void scanf();
        int getPoint1(){return point1;}
        int getPoint2(){return point2;}
        int getPoint3(){return point3;}
        int getPoint4(){return point4;}
        int getPoint5(){return point5;}
        int sum(){return point1 + point2 + point3 + point4 + point5;}
};

void Student::scanf(){
    cin >> point1 >> point2 >> point3 >> point4 >> point5;
}
int main() {
    int n;
    cin >> n;
    int tmp = 0, count = 0;
    Student student[n + 1];
    for (int i = 1; i <= n; i++){
        student[i].scanf();
        if (i == 1) tmp = student[i].sum();
    }
    for (int i = 2; i <= n; i++){
        if (student[i].sum() > tmp) count++;
    }
    cout << count;
    return 0;
}

