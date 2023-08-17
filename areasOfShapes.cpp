#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calcArea() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calcArea() override {
        return M_PI * radius * radius;
    }

    void display() override {
        cout << "Circle with radius: " << radius << std::endl;
    }

    ~Circle() {
        cout << "Destructor called for Circle" << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double calcArea() override {
        return width * height;
    }

    void display() override {
        cout << "Rectangle with width: " << width << " and height: " << height << std::endl;
    }

    ~Rectangle() {
        cout << "Destructor called for Rectangle" << std::endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double calcArea() override {
        return 0.5 * base * height;
    }

    void display() override {
        cout << "Triangle with base: " << base << " and height: " << height << std::endl;
    }

    ~Triangle() {
        cout << "Destructor called for Triangle" << std::endl;
    }
};

bool operator>(Shape& shape1, Shape& shape2) {
    return shape1.calcArea() > shape2.calcArea();
}

int main() {
    Shape* circle = new Circle(5);
    Shape* rectangle = new Rectangle(4, 6);
    Shape* triangle = new Triangle(3, 8);

    circle->display();
    cout << "Area: " << circle->calcArea() << std::endl;

    rectangle->display();
    cout << "Area: " << rectangle->calcArea() << std::endl;

    triangle->display();
    cout << "Area: " << triangle->calcArea() << std::endl;

    if (*circle > *rectangle) {
        cout << "Circle has a greater area than the rectangle" << std::endl;
    }
    else {
        cout << "Circle does not have a greater area than the rectangle" << std::endl;
    }

    if (*triangle > *circle) {
        cout << "Triangle has a greater area than the circle" << std::endl;
    }
    else {
        cout << "Triangle does not have a greater area than the circle" << std::endl;
    }

    delete circle;
    delete rectangle;
    delete triangle;

    return 0;
}
