#include "Integer.h"
Integer::Integer(int value){
	this->value=value;
}

Integer::Integer(const Integer& i){
	value=i.value;
	cout<<"copy constructor called!"<<endl;
}

Integer operator+(const Integer &i1, const Integer &i2){
	Integer temp;
	temp.value=i1.value+i2.value;
	return temp;
}

ostream& operator<<(ostream &out, const Integer& i){
	out<<i.value;
	return out;
}

