//Passing Object to functions
//Adding two Complex Numbers
//Dereferencing Pointers
//Displaying Object Data using Pointers
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

    complexNumber temporary(r,i);
        return temporary;
}

int main(){

    complexNumber comp1(6,7), comp2(3,4), comp3;
    comp3 = addFunction(comp1, comp2);
    comp1.displayData(); // 6+7i
    comp2.displayData(); // 3+4i
    cout<<"Adding the two Complex Number We Get;"<<endl;
    comp3.displayData(); // 9+11i

    cout<<"Pointer to Object"<<endl<<endl;

    complexNumber* ptr1;
    ptr1=&comp3;

    ptr1->displayData();
    return 0;

}