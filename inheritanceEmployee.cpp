#include<iostream>
#include<string>

using namespace std;

class Employee {
protected:
    string name;
    int number;
public:
    virtual void getData() {
        cout << "Enter the name of Employee: ";
        getline(cin, name);
        cout << "Enter the number of Employee: ";
        cin >> number;
        cin.ignore();
    }
    virtual void putData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Number: " << number << endl;
    }
};

class Manager : public Employee {
private:
    char title;
    double clubDues;
public:
    void getData() {
        Employee::getData();
        cout << "Enter the title of the Employee: ";
        cin >> title;
        cout << "Enter the amount of club dues: ";
        cin >> clubDues;
    }
    void putData() {
        Employee::putData();
        cout << "Employee Title: " << title << endl;
        cout << "Club Dues: " << clubDues << endl;
    }
};

class Scientist : public Employee {
private:
    int publications;
public:
    void getData() {
        Employee::getData();
        cout << "Enter the number of publications: ";
        cin >> publications;
    }
    void putData() {
        Employee::putData();
        cout << "Publications: " << publications << endl;
    }
};

class Programmer : public Employee {
private:
    double salary;
    string expertise;
public:
    void getData() {
        Employee::getData();
        cout << "Enter programmer salary: ";
        cin >> salary;
        cin.ignore();
        cout << "Enter programmer expertise: ";
        getline(cin, expertise);
    }
    void putData() {
        Employee::putData();
        cout << "Programmer Salary: " << salary << endl;
        cout << "Programmer Expertise: " << expertise << endl;
    }
};

void Print(Employee& e) {
    e.putData();
}

int main() {
    Employee* ptr;
    Manager m;
    Scientist s;
    Programmer p;

    ptr = &m;
    ptr->getData();
    Print(*ptr);

    ptr = &s;
    ptr->getData();
    Print(*ptr);

    ptr = &p;
    ptr->getData();
    Print(*ptr);

    return 0;
}
