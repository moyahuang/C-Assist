#include "Tree.h"

Tree::Tree(int age){
    m_age=age;
}
void Tree::grow(int years){
    m_age+=years;
}

int Tree::getAge(){
    return m_age;
}

void Tree::print(){
    cout<<getAge()<<endl;
}
