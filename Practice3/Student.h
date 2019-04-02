#include <string>
using namespace std;
#ifndef _STUDENT_H
#define _STUDENT_H
class Student
{
    public:
    Student(){
        name="default";
        age=0;
    }
    void setName(string n);
    void setAge(int a);

    void print();

    private:
    string name;
    int age;
}; 
#endif