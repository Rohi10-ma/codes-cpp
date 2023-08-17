#include<iostream>
#include<cmath>

using namespace std;

class Shapes {
public:
    // Pure virtual function.
    virtual void Area() const = 0;

    // Virtual destructor.
    virtual ~Shapes() {}
};

class Shape2D : public Shapes {
protected:
    double side;

public:
    Shape2D(double s) : side(s) {}

    void Area() const override {}
    virtual ~Shape2D() {}
};

class Shape3D : public Shapes {
protected:
    double length, width, height;

public:
    Shape3D(double l, double w, double h) : length(l), width(w), height(h) {}

    void Area() const override {}
    virtual void Volume() const {}
    virtual ~Shape3D() {}
};

class Circle : public Shape2D {
public:
    Circle(double r) : Shape2D(r) {}

    void Area() const override {
        cout << "Area of Circle: " << 3.14 * side * side << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    ~Circle() {}
};

class Square : public Shape2D {
public:
    Square(double s) : Shape2D(s) {}

    void Area() const override {
        cout << "Area of Square: " << side * side << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    ~Square() {}
};

class Cube : public Shape3D {
public:
    Cube(double l, double w, double h) : Shape3D(l, w, h) {}

    void Area() const override {
        cout << "Area of Cube: " << 2 * (length * width + width * height + height * length) << endl;
    }

    void Volume() const override {
        cout << "Volume of Cube: " << length * width * height << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    ~Cube() {}
};

class Pyramid : public Shape3D {
public:
    Pyramid(double b, double h, double l) : Shape3D(l, b, h) {}

    void Area() const override {
        cout << "Surface Area of Pyramid: " << length * width + length * sqrt(pow(width / 2, 2) + pow(height, 2)) + width * sqrt(pow(length / 2, 2) + pow(height, 2)) << endl;
    }

    void Volume() const override {
        cout << "Volume of Pyramid: " << (length * width * height) / 3 << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    ~Pyramid() {}
};

int main() {
    Shapes* s1;                // Declare a pointer to Shapes class
    Shape2D* s2;               // Declare a pointer to Shape2D class
    Shape3D* s3, * s4;         // Declare pointers to Shape3D class

    s1 = new Circle(4.0);      // Create a Circle object and assign it to s1 pointer
    s2 = new Square(3.0);      // Create a Square object and assign it to s2 pointer
    s3 = new Cube(5.0, 4.0, 3.0);  // Create a Cube object and assign it to s3 pointer
    s4 = new Pyramid(4.0, 3.0, 7.0);  // Create a Pyramid object and assign it to s4 pointer

    s1->Area();                // Call Area() function for Circle object
    s2->Area();                // Call Area()function for Square object
    s3->Area(); // Call Area() function for Cube object
    s3->Volume(); // Call Volume() function for Cube object
    s4->Area(); // Call Area() function for Pyramid object
    s4->Volume(); // Call Volume() function for Pyramid object
    delete s1, s2, s3, s4;     // Delete objects to free up memory

return 0;
}
