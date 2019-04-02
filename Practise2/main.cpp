#include <iostream>
#include <iomanip>

int main(){
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    const float ten=10;

    float f=0.012345678;
    cout<<"original f:"<<f<<endl;
    cout<<f*ten<<endl;
    double d=12.34567890123456;
    cout<<"original d:"<<d<<endl;
    cout<<d*ten<<endl;

    const float million=1e6;

    float f2=12345.678;
    cout<<"original f2:"<<f<<endl;
    cout<<"set f2 precision:"<<setprecision(10)<<f2<<endl;
    cout<<f2*million<<endl;
    double d2=12345.67890123456;
    cout<<"set d2 precision:"<<setprecision(20)<<d2<<endl;
    return 0;
}
