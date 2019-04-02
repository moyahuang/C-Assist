#include <iostream>
#include <string>
#include <typeinfo>
#include <malloc.h>
using namespace std;

int main()
{
    const string str("hello world");
    cout<<str.append(" moya");
    // string address;
    // cout<<address;

    // cout<<"----------------------"<<endl;

    // char n[]="moya";
    // char addr[]="chengdu";
    // cout<<n<<endl<<addr<<endl;

    // cout<<"----------------------"<<endl;

    // char a[]={"moya"};
    // char b[]={"chengdu"};
    // cout<<a<<endl<<b<<endl;

    // cout<<"----------------------"<<endl;
    // float t=2.312;
    // double i=(double)t;
    // cout<<"i:"<<typeid(i).name()<<endl<<"t:"<<typeid(t).name();

    // cout<<"----------------------"<<endl;
    // cout<< "ADDR：  "<< n << "  POINT_ADDR" << (void*)addr<<endl;

    // cout<<"----------------------"<<endl;
    // char *c;
    // c = (char*)malloc(sizeof(char) * 20);
    // char *d;
    // d = (char*)malloc(sizeof(char) * 20);
    // cin>>c;   /*输入你的姓名*/cin>>b;   /*输入你的地址*/
    // cout<<c<<'\n'<<d<<endl;

    // cout<<"----------------------"<<endl;
    // float g=3.14;
    // double db=g;
    // cout<<db<<"\t"<<typeid(db).name()<<endl;
    return 0;
}
