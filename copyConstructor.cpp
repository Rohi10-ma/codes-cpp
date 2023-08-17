#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Person(const std::string& n, int a) {
        name = n;
        age = a;
    }

    // Copy constructor
    Person(const Person& other) {
        name = other.name;
        age = other.age;
    }

    // Method to display person details
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create a person object using the parameterized constructor
    Person person1("Alice", 25);

    // Create a new person object using the copy constructor
    Person person2 = person1;

    // Display the details of both persons
    std::cout << "Person 1: ";
    person1.display();
    std::cout << "Person 2: ";
    person2.display();

    return 0;
}
