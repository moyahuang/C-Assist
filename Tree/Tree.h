#ifndef TREE_H_
#define TREE_H_
class Tree{
    private:
        int m_age;
    public:
        Tree():m_age(0){};
        Tree(int age);
        void grow(int years);
        int getAge();
        void print();
};
#endif // TREE_H_

