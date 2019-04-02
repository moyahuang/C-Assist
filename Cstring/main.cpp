#include <iostream>
#include <cstring>

struct Book{
    char name[30];
};

int main(){
    Book book={"cold war"};
    strcpy(book.name,"heart signal");
    // book.name="heart signal";
    std::cout<<book.name<<std::endl;
}