#include <iostream>
#include <cstdlib>
using namespace std;
class Score{
	public:
		Score(int score=0){
			this->score=score;
			totalScore+=score;
		}
		static int GetTotalScore(){
			return totalScore;
		}
		int getScore(){
			return score;
		}
		
		~Score(){
//			totalScore-=score;
			cout<<"destructor called"<<endl;
		}
		
	private:
		int score;
		static int totalScore; 
			
};

int Score::totalScore=0;


class Test{
	Test(){
		cout<<"constructor called"<<endl;
	}
	~Test(){
		cout<<"destructor called"<<endl;
	}
	private:
		int value;
};

void testStatic(){
	Score *p=new Score[10];//����10��Score���� 
	
	for(int i=0;i<10;i++){//Ϊ�����Ա����ֵ����ӡ 
		p[i]=Score(rand()%100);
		cout<<"s"<<i<<"="<<p[i].getScore()<<" ";
	}
	cout<<endl<<Score::GetTotalScore()<<endl;//��ӡ��̬���ݳ�ԱtotalScore 
	
//	delete p[4];
//	cout<<endl<<Score::GetTotalScore()<<endl;//��ӡ��̬���ݳ�ԱtotalScore 
	
//	delete []p;
	cout<<endl<<Score::GetTotalScore()<<endl;//��ӡ��̬���ݳ�ԱtotalScore 
}

void testTest(){
	
}

int main(int argc, char** argv) {
	
	
	return 0;
}
