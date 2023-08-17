#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    void display() {
        cout << real << " + " << imag << "i";
    }

    friend class Operations;
};

class Operations {
public:
    Complex add(Complex c1, Complex c2) {
        int realSum = c1.real + c2.real;
        int imagSum = c1.imag + c2.imag;
        return Complex(realSum, imagSum);
    }

    Complex subtract(Complex c1, Complex c2) {
        int realDiff = c1.real - c2.real;
        int imagDiff = c1.imag - c2.imag;
        return Complex(realDiff, imagDiff);
    }
};

int main() {
    Complex c1(5, 7);
    Complex c2(3, 2);

    Operations ops;

    Complex sum = ops.add(c1, c2);
    Complex difference = ops.subtract(c1, c2);

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    difference.display();
    cout << endl;

    return 0;
}
