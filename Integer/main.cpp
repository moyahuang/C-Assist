#include <iostream>
#include "Integer.h"
using namespace std;

void testCopyConstructor(){
	Integer i1=Integer(1);
//	Integer i2=i1;
//	Integer i2(i1);
	Integer i2=Integer(i1);
	
}

void testAddAndOutput(){
	Integer i1(10);
	Integer i2(11);
	Integer i3=i1+i2;
	cout<<"i1="<<i1<<"\ni2="<<i2<<endl;
	cout<<"i1+i2="<<i3<<endl;
	
	cout<<"after computation"<<endl;
	cout<<"i1="<<i1<<"\ni2="<<i2<<endl;
}

int main(int argc, char** argv) {

//	testCopyConstructor();
	testAddAndOutput();
	return 0;
}


