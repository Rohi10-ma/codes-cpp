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
        cout<<"The Complex Number is: "<<real<<"+"<<imaginary<<"i"<<endl<<endl;

    }
    int getReal(){
        return real;

    }
    float getImaginary(){
        return imaginary;

    }

    
};

complexNumber addFunction(complexNumber c1, complexNumber c2){

    int r;
    float i;

    r= c1.getReal() + c2.getReal();
    i= c1.getImaginary() + c2.getImaginary();

    complexNumber temporary(r,i){
        return temporary;
    }

}

complexNumber subFunction(complexNumber c1, complexNumber c2){
    int r; float i;

    r=c1.getReal() - c2.getReal();
    i=c1.getImaginary() - c2.getImaginary();

    complexNumber temporary(r,i){
        return temporary;
    }
}

int main(){
    complexNumber compNumb1(6,7), compNumb2(3,4), addCompNumb, subCompNumb;
    addCompNumb = addFunction(compNumb1, compNumb2);
    compNumb1.displayData(); // 6+7i
    compNumb2.displayData(); // 3+4i
    cout<<"Adding The Two Complex Number We Get;"<<endl;
    addCompNumb.displayData(); // 9+11i

    complexNumber* ptr1;
    ptr1=&comp3;

    ptr1->displayData();



}