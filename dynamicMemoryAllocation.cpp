#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Assign values to the array
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Print the array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the memory
    delete[] arr;

    

    return 0;
}
