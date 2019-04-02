#include <iostream>
using namespace std;
class Integer{
	public:
		Integer():value(0){}
		Integer(int value){
			this->value=value;
		};
		Integer(const Integer& i){
			value=i.getValue();
		}
		Integer operator+(Integer i){
			value+=i.getValue();
			return *this;
		}
		
		friend ostream &operator<<(ostream &cout, Integer &i);
		
		int getValue() const{
			return value;
		}
	private:
		int value;
};
ostream &operator<<(ostream &cout, Integer &i){
			cout<<i.getValue();
			return cout;
} 

int main(int argc, char** argv) {
	
	Integer i1(1);
	Integer i2(2);
//	Integer i3=i1+i2;
	cout<<(i1+i2)<<endl;
	return 0;
}
