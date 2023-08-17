#include <iostream>
using namespace std;

class myClass {
    public:
    int value;

    // Default constructor
    myClass() {
        value = 0;
    }

    // Copy constructor
    myClass(const myClass& other) {
        value = other.value;

    }
};

int main() {
    // Create an instance of MyClass
    myClass obj1;
    obj1.value = 10;

    // Create a new instance of MyClass using the copy constructor
    myClass obj2 = obj1;
    //MyClass obj2(obj1);

    // Output the values of both objects
    cout << "obj1.value: " << obj1.value <<endl;
    cout << "obj2.value: " << obj2.value <<endl;

  return 0;
}
