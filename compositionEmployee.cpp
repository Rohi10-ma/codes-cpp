#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeId;

public:
    Employee(const std::string& empName, int empId)
        : name(empName), employeeId(empId) {}

    void display() const {
        std::cout << "Name: " << name << ", Employee ID: " << employeeId << std::endl;
    }
};

class Department {
private:
    std::string departmentName;
    Employee manager;

public:
    Department(const std::string& deptName, const std::string& mgrName, int mgrId)
        : departmentName(deptName), manager(mgrName, mgrId) {}

    void display() const {
        std::cout << "Department: " << departmentName << std::endl;
        manager.display();
    }
};

int main() {
    Department sales("Sales", "John Doe", 12345);
    sales.display();

    return 0;
}
