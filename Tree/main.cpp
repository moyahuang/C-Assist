#include <iostream>
#include"Tree.h"
#include <string.h>
int main()
{
    using std::cout;
    using std::endl;

    Tree tree;
    cout<<tree.getAge()<<endl;
    tree.print();
    // cout<<"a new tree:"<<tree.getAge()<<endl;
    // tree.grow(100);
    // cout <<"after 100 years:"<<tree.getAge()<< endl;
    return 0;
}
