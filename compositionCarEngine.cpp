#include<iostream>
#include<string>

using namespace std;

class Engine{

    public:

    void start(){

        cout<<"Engine Start!"<<endl;
    }

    void stop(){

        cout<<"Engine Stop!"<<endl;
    }
        
};

class Car{

    public:

    Engine engine;

    void carStart(){

        engine.start();
        cout<<"Car Start!"<<endl;
    }

    void carStop(){

        engine.stop();
        cout<<"Car Stop!"<<endl;
    }
};

int main(){
    Car car;

    car.carStart();
    car.carStop();

    return 0;
}