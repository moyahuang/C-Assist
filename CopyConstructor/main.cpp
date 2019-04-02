#include<iostream>
using namespace std;

class Point{
    public:
    Point(int x=0, int y=0){
        this->x=x;
        this->y=y;
    }

    Point(Point &p){
        this->x=p.x;
        this->y=p.y;
        cout<<"copy constructor called"<<endl;
    }

    Point add(const Point p1, const Point p2){
        Point p;
        p.x=p1.x+p2.x;
        p.y=p1.y+p2.y;
        return p;
    }

    void print(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }

    private:
    int x;
    int y;
};

int main(){
    Point p1(1,1);
    Point p2(2,2);

    Point p3=p3.add(p1,p2);
    p3.print();
    return 0;
}