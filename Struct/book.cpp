#include "book.h"
#include <string>

string Book::getName(){
    return m_name;
}

void Book::setName(string name){
    m_name=name;
}
