#include <iostream>
using namespace std;

class myClass {
public:
    int *ptr;
    myClass() {
        ptr = new int;
        *ptr = 2000;
    }
    ~myClass() {
        delete ptr;
    }
};

int main() {

    myClass obj1;
    cout<<*obj1.ptr<<endl;
    *obj1.ptr = 5;

    // Shallow copy
    myClass obj2 = obj1;
    cout << *obj2.ptr << endl;
    *obj1.ptr = 10;
    cout << *obj2.ptr << endl;

    // Deep copy 
    myClass obj3;
    *obj3.ptr = *obj1.ptr;
    cout << *obj3.ptr<< endl;  

    *obj1.ptr = 15;
    cout << *(obj3.ptr) << endl;  
    cout << *(obj1.ptr) << endl;  
    cout << *(obj2.ptr) << endl;  

    return 0;
}
