#include<iostream>

using namespace std;

int main(){

    int variable=7;

    int *p;
    float *f;
    char *c;
    double *d;

    //Stores value of 'variable' in pointer 'p'
    p=&variable;

    //Will print The value of Variable
    cout<<"Value of Variable: "<<variable<<endl; // 7

    //Will print the address of variable
    cout<<"Pointer address: "<<p<<endl; // "Some Address"

    //Wil print the value stored in pointer
    cout<<"Value in Pointer: "<<*p<<endl; // 7

    //Changing Value of Variable Through Pointers

    *p=6; //Value of Variable = 6

    //Stores value of 'variable' in pointer 'p'
    p=&variable;

    //Will print The value of Variable
    cout<<"Value of Variable: "<<variable<<endl; // 6

    //Will print the address of variable
    cout<<"Pointer address: "<<p<<endl; // "Some Address"

    //Wil print the value stored in pointer
    cout<<"Value in Pointer: "<<*p<<endl; // 6

}