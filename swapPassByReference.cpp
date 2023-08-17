#include <iostream>

// Function to swap two numbers using pass by reference
void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Call the swapNumbers function to swap the values of x and y
    swapNumbers(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
