#include <iostream>

void incrementCount() {
    static int count = 0;  // Static variable

    count++;
    std::cout << "Count: " << count << std::endl;
}

int main() {
    incrementCount();  // Output: Count: 1
    incrementCount();  // Output: Count: 2
    incrementCount();  // Output: Count: 3
    
    return 0;
}