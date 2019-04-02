#include <iostream>
#include "Move.h"

int main(int argc, char** argv) {
	Move m1(3.1,0.5);
	Move m2(1,2);
	m1.showmove();
	m2.showmove();
	
	std::cout<<"----------------------"<<std::endl; 
	
	Move m3=m1.add(m2); 
	m3.showmove();
	return 0;
}
