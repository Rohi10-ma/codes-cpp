//A function which is declared or defined in parent class and redefined in child class
#include<iostream>

using namespace std;
class A{
    public:
        virtual void show(){
            cout<<"The Parent class A"<<endl;

        }
};

class B: public A{
    public:
        void show(){
            cout<<"The child Class B"<<endl;
        }
};

class C: public A{
    public:
        void show(){
            cout<<"The child Class C"<<endl;
        }
};

int main(){
    A obj1;
    B obj2;
    C obj3;

    A *ptr;
    ptr = &obj1;
    ptr->show();
    ptr = &obj2;
    ptr->show();
    ptr = &obj3;

    ptr->show();
}
