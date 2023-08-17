#include <iostream>
using namespace std;

class complexNumbers{
private:
    int real;
    int imaginary;

public:
    complexNumbers(int r, int i) : real(r), imaginary(i) {}

    void display() {
        cout <<"Sum of Complex Numbers: "<< real << " + " << imaginary << "i";
    }

    friend complexNumbers addComplex(complexNumbers c1, complexNumbers c2);
};

complexNumbers addComplex(complexNumbers c1, complexNumbers c2) {
    int realSum = c1.real + c2.real;
    int imagSum = c1.imaginary + c2.imaginary;
    return complexNumbers(realSum, imagSum);
}

int main() {
    complexNumbers c1(2, 3);
    complexNumbers c2(4, 5);

    complexNumbers sum = addComplex(c1, c2);

    sum.display();

    return 0;
}