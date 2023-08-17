//Function of the same names but different purposes
#include<iostream>

using namespace std;

class Shape{
    public:
        void draw(){
            cout<<"Drawing Shape: "<<endl;
        }
};

class Rectangle: public Shape{
    int length, width;
    public:
        void draw(){
            cout<<"Drawing Rectangle: "<<endl;
        }
};

class Circle: public Shape{
    public: 
        void draw(){
            cout<<"Drawing Circle: "<<endl;
        }
};

int main(){
    //Will Access Child Class: Circle
    Circle Obj;
    Obj.draw();
    //Will Access Parent Class: Shape
    Shape *ptr;
    ptr = new Circle;
    ptr->draw();
    //Will Access Parent Class: Shape
    ptr = new Rectangle;
    ptr->draw();
    //Will Access Child Class: Rectangle
    Rectangle *pitr;
    pitr = new Rectangle;
    pitr->draw();

}