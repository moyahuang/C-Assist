#include <iostream>
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void swap(int *p1, int *p2){
    int *temp=p1;
    p1=p2;
    p2=temp;
}

// void swap(double *x, double *y){
//      double temp=*x;
//     *x=*y;
//     *y=temp;
// }

int main(){
    using std::cout;
    using std::endl;
    int a=10,b=20;
    cout<<"before swap: a="<<a<<" b="<<b<<endl;
    swap(a,b);
    cout<<"after swap: a="<<a<<" b="<<b<<endl;

    // double d1=1.2,d2=3.4;
    // cout<<"before swap: d1="<<d1<<" d2="<<d2<<endl;
    // swap(&d1,&d2);
    // cout<<"after swap: d1="<<d1<<" d2="<<d2<<endl;

    int *p1=&a;
    int *p2=&b;
    cout<<*p1<<" "<<*p2<<endl;
    // swap(p1,p2);
    swap(&a, &b);
    cout<<*p1<<" "<<*p2<<endl;
    return 0;
}