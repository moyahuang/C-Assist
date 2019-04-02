#include <iostream>
using namespace std;

struct Book{
    char name[30];
    int price;
    char press[50];
};

int main(){
    Book book={"演员的自我修养",80,"SCU"};
    cout<<"name:"<<book.name<<endl
        <<"price:"<<book.price<<endl
        <<"press:"<<book.press<<endl;
}