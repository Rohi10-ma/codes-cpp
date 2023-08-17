#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string color;
public:
    Animal(const string& name, const string& color) : name(name), color(color) {}
    virtual ~Animal() {}
    virtual void display() = 0;
};

class Deer : public Animal {
private:
    bool hasAntlers;
public:
    Deer(const string& name, const string& color, bool hasAntlers)
        : Animal(name, color), hasAntlers(hasAntlers) {}

    void display() override {
        cout << "Deer Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Has Antlers: " << (hasAntlers ? "Yes" : "No") << endl;
    }
};

class Zebra : public Animal {
private:
    string stripePattern;
public:
    Zebra(const string& name, const string& color, const string& stripePattern)
        : Animal(name, color), stripePattern(stripePattern) {}

    void display() override {
        cout << "Zebra Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Stripe Pattern: " << stripePattern << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Deer("Bambi", "Brown", true);
    animals[1] = new Zebra("Marty", "Black and White", "Vertical");

    for (int i = 0; i < 2; i++) {
        animals[i]->display();
        cout << endl;
    }

    // Clean up the memory
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}
