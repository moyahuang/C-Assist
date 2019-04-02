#include "Student.h"
#include <iostream>
void Student::setAge(int a){
    age=a;
}

void Student::setName(string n){
    name=n;
}

void Student::print(){
    std::cout<<"name="<<name<<" age="<<age<<std::endl;
}