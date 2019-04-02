#include <iostream>
#include <string>
//#include "book.h"

using namespace std;

class Book{
public:
    Book(){
        m_name="default";
        m_year=0;
    }

    Book(char* name, int year){
        m_name="default2";
        m_year=0;
    }

    void print(){
        cout<<m_name<<endl<<m_year<<endl;
    }

private:
    char *m_name;
    int m_year;
};

class Magazine{
    public:
    char *name;
    char *press;
};
int main()
{
    //Book b1;
    //b1.setName("BOOK");
    //cout << b1.getName() << endl;
    Book b2={"book", 10};
    b2.print();
    // b2.print();
    //Magazine m1={"magazine","Baby Press"};
    //cout<<m1.name<<endl<<m1.press<<endl;
    return 0;
}
