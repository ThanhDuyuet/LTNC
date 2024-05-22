#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int age;
        string first_name, last_name;
        int standard;
    public:
        void setAge(); int getAge();
        void setFirst_name(); string getFirst_name();
        void setLast_name(); string getLast_name();
        void setStandard(); int getStandard();
};
void Student::setAge(){
    cin >> age;
}
int Student::getAge(){
    return age;
}
void Student::setFirst_name(){
    cin >> first_name;
}
string Student::getFirst_name(){return first_name;}
void Student::setLast_name(){cin >> last_name;}
string Student::getLast_name(){return last_name;}
void Student::setStandard(){
    cin >> standard;
}
int Student::getStandard(){return standard;}
int main() {
    Student student;
    student.setAge();
    student.setFirst_name();
    student.setLast_name();
    student.setStandard();
    cout << student.getAge() << endl;
    cout << student.getLast_name() << ", " << student.getFirst_name() << endl;
    cout << student.getStandard() << endl;
    cout << endl;
    cout << student.getAge() << "," << student.getFirst_name() << "," << 
    student.getLast_name() << "," << student.getStandard();
    return 0;
}

