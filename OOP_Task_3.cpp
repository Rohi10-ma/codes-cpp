#include<iostream>

using namespace std;

class Rectangle {
    private:
        float length;
        float width;
    public:
        void setLength(float l) {
            length = l;
        }
        float getLength() {
            return length;
        }
        void setWidth(float w) {
            width = w;
        }
        float getWidth() {
            return width;
        }
        float perimeter() {
            return 2 * (length + width);
        }
        float area() {
            return length * width;
        }
        void show() {
            cout<<"The Length is: "<<length<<endl;
            cout<<"The Width is: "<<width<<endl;
        }
        int sameArea(Rectangle Rectangle2) {
            if (area() == Rectangle2.area()) {
                return 1;
            }
            else {
                return 0;
            }
        }
};

int main() {
    Rectangle R1, R2;

    // Setting Length and width
    R1.setLength(5);
    R1.setWidth(2.5);

    R2.setLength(5);
    R2.setWidth(18.9);

    // Displaying The Attributes of Rectangles
    cout<<"Rectangle 1"<<endl;
    R1.show();
    cout<<"Perimeter is: "<<R1.perimeter()<<endl;
    cout<<"Area is: "<<R1.area()<<endl;

    cout<<endl<<"Rectangle 2"<<endl;
    R2.show();
    cout<<"Perimeter is: "<<R2.perimeter()<<endl;
    cout<<"Area is: "<<R2.area()<<endl;

    // Comparing Areas of both the Rectangles
    if(R1.area() == R2.area()) {
        cout<<"The Areas of Both the Rectangles are Equal"<<endl;
    }
    else {
        cout<<"The Areas of Both the Rectangles are not Equal"<<endl;
    }
    //Modifing The Firs Rectangle
    R1.setLength(15);
    R2.setWidth(6.3);

    //Displaying The First rectangle after modification
    cout<<endl<<"Rectangle 1 After Modification"<<endl;
    R1.show();
    cout<<"Perimeter is: "<<R1.perimeter()<<endl;
    cout<<"Area is: "<<R1.area()<<endl;
    
    //Comparing Areas again
    if(R1.area() == R2.area()) {
        cout<<"The Areas of Both the Rectangles are Equal"<<endl;
    }
    else {
        cout<<"The Areas of Both the Rectangles are not Equal"<<endl;
    }

    return 0;
}
