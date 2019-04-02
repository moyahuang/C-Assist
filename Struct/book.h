#include <string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

struct Book{
private:
    string m_name;
    string m_press;
public:
    Book(){
        m_name="default";
        m_press="scu";
    }

    void setName(string name);
    string getName();
};
#endif // BOOK_H
