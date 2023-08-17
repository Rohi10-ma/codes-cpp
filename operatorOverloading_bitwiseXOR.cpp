#include <iostream>
using namespace std;


class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}

    // Overloading the bitwise XOR operator (^)
    MyNumber operator^(const MyNumber& other) const {
        int result = value ^ other.value;
        return MyNumber(result);
    }

    // Overloading the stream insertion operator (<<)
    friend ostream& operator<<(ostream& os, const MyNumber& number) {
        os << number.value;
        return os;
    }

    // Overloading the stream extraction operator (>>)
    friend istream& operator>>(istream& is, MyNumber& number) {
        is >> number.value;
        return is;
    }
};

int main() {
    MyNumber a(5);
    MyNumber b(3);

    MyNumber c = a ^ b;
    cout << "Bitwise XOR: " << c << endl;

    cout << "Enter a value: ";
    cin >> a;
    cout << "You entered: " << a << endl;

    return 0;
}