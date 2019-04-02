#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Book{
	public:
		Book(char *name){
			this->name=name;
		}
		
		void print(){
			cout<<"name="<<name<<endl;
		}
		private:
			char *name;
};
int main(int argc, char** argv) {
	
	Book b={"hello, my friend~"};
	b.print(); 
	
	return 0;
}
