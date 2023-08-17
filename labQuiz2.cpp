#include <iostream>
using namespace std;
enum trafficLight {
    RED = 30,
    GREEN = 45,
    YELLOW = 5,
};

int main() {
    
    cout << "Red light duration: " << RED << " seconds"<<endl;
    cout << "Green light duration: " << GREEN << " seconds"<<endl;
    cout << "Yellow light duration: " << YELLOW << " seconds"<<endl;

    return 0;
}