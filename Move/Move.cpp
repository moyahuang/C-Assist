#include "Move.h"
#include <iostream>

Move::Move(double a, double b){
	x=a;
	y=b;
}

void Move::showmove() const{
	std::cout<<"x="<<x<<"\ty="<<y<<std::endl;
}

Move Move::add(const Move &m) const{//该成员函数用const标识，表示此方法不能用来改变调用此方法的对象 
	Move temp;
	temp.x=x+m.x;
	temp.y=y+m.y;
	return temp; 
}
void Move::reset(double a, double b){
	x=a;
	y=b;
}
