#include<iostream>

using namespace std;

int main(){
    //Declaring three variables to input three numbers
    int num_1;
    int num_2;
    int num_3;
    //Taking three numbers as input
    cout <<"Enter First Number: ";
    cin >>num_1;
    cout <<"Enter Second Number: ";
    cin >>num_2;
    cout <<"Enter Third Number: ";
    cin >>num_3;
    //Declaring Variable to store the Smallest number
    int num_small;
    //Using if-else to find out the Smalles number
    if(num_1 < num_2 && num_1 < num_3){
        num_small=num_1;
    }
    else if(num_2 < num_1 && num_2 < num_3){
        num_small=num_2;
    }
    else{
        num_small=num_3;
    }
    //Printing the Smallest number as output
    cout <<endl<<"The Smallest Number is \'"<<num_small<<"\'";

    return 0;
}