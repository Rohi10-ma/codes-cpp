//Program for Complex Number Arthimetics
//OOP Lab quiz
#include<iostream>

using namespace std;

class complexNumber{
    private:
    int real;
    float imaginary;

    public:
    complexNumber(){

    }
    complexNumber(int r, float i){
        real = r;
        imaginary = i;
    }

    void displayData(){

        cout<<"The Complex Number is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
    }

    int getReal(){

        return real;
    }
    float getImaginary(){

        return imaginary;
    }
};

complexNumber addFunction(complexNumber n1, complexNumber n2){
    int r;
    float i;

    r = n1.getReal() + n2.getReal();
    i = n1.getImaginary() + n2.getImaginary();

    complexNumber storeValue(r,i);
        return storeValue;
}

complexNumber subFunction(complexNumber n1, complexNumber n2){
    int r;
    float i;

    r = n1.getReal() - n2.getReal();
    i = n1.getImaginary() - n2.getImaginary();

    complexNumber storeValue(r,i);
        return storeValue;
}

int main(){

    complexNumber comp1(6,7), comp2(3,4), comp3, comp4;

    comp3 = addFunction(comp1, comp2);
    
    comp1.displayData(); // 6+7i
    comp2.displayData(); // 3+4i
    
    cout<<"Adding the two Complex Number We Get: "<<endl;
    comp3.displayData(); // 9+11i

    comp4 = subFunction(comp1, comp2);
    cout<<"Subtracting The Two Complex Numbers We Get: "<<endl;
    comp4.displayData(); //3+3i
    
    return 0;

}