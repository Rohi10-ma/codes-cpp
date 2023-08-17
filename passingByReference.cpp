#include <iostream>

void increment(int&  num) {
    num++;  // Increment the original value
    std::cout<<"Value : "<<num<<endl;
}

int main() {
    int x = 5;
    std::cout << "Before increment: " << x << std::endl;
    increment(x);
    std::cout << "After increment: " << x << std::endl;


    return 0;
}