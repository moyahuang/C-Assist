#ifndef INTEGER_H //����ͬһ��ͷ�ļ����������
#define INTEGER_H

#include <iostream>
using namespace std;

class Integer{
	public:
		Integer(int value=0);
		Integer(const Integer& i);
		friend Integer operator+(const Integer &i1, const Integer &i2);
		friend ostream& operator<<(ostream &cout, const Integer& i);
		int getValue() const{
			return value;
		}
	private:
		int value;
};
#endif
