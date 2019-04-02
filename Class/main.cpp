#include <iostream>
#include <string>
using namespace std;

struct SBook{
    string name;
    string press;
};

class Book{
    private:
    string name;
    string press;
};


int main(){
    SBook b1={"白富美传说","四川大学出版社"};
    cout<<"b1: "<<b1.name<<" "<<b1.press<<endl;

    Book b2={"高富帅自传","四川大学出版社"};
    cout<<"b2: "<<b2.name<<" "<<b2.press<<endl;
    return 0;
}