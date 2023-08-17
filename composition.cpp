#include <iostream>

class Engine {
public:
    void start() {
        std::cout << "Engine started." << std::endl;
    }

    void stop() {
        std::cout << "Engine stopped." << std::endl;
    }
};

class Car {
private:
    Engine engine;

public:
    void startCar() {
        engine.start();
        std::cout << "Car started." << std::endl;
    }

    void stopCar() {
        engine.stop();
        std::cout << "Car stopped." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();

    // Perform some operations with the car...

    myCar.stopCar();

    return 0;
}
