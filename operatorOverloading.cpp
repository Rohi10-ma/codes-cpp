#include<iostream>

using namespace std;

class MyNumber{

    private:
        int value;
    public:
        MyNumber(int val) : value(val){}

        //
        MyNumber operator*(const MyNumber& other)const {

            int result = value*other.value;
            return MyNumber(result);
        }

        //Overloading the modulo operator(%)
        double operator%(const MyNumber& other) const {

            int result = static_cast<double>(value)/other.value;

            return (result-static_cast<int>(result));
        }

        // Overloading the post incriment operator(++)
        MyNumber operator++(int){

            MyNumber temp = *this;
            value++;

            return *this;
        }

        // Overloading the division assignment operator (/=)
        MyNumber& operator/=(const MyNumber& other) {
            value /= other.value;
            return *this;
        }

        // Overloading the logical OR operator (||)
        bool operator||(const MyNumber& other) const {
            return (value != 0) || (other.value != 0);
        }

        // Overloading the array subscript operator ([])
        int operator[](int index) const {
            // Assuming the custom class represents an array-like structure
            return value + index;
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

int main(){
    MyNumber a(5);
    MyNumber b(2);

    MyNumber c = a * b;
    cout << "Matrix Multiplication: " << c << endl;

    double d = a % b;
    cout << "Modulo Of Floating-Point Numbers: " << d << endl;

    MyNumber e = a++;
    cout << "Post-Increment: " << e << endl;

    a /= b;
    cout << "Division Assignment: " << a << endl;

    MyNumber f(3);
    bool g = a || f;
    cout << "Logical OR: " << g << endl;

    MyNumber array(10);
    cout << "Array Subscript: " << array[3] << endl;

    cout << "Enter a Value: ";
    cin >> array;
    cout << "You Entered: " << array << endl;

    return 0;
}