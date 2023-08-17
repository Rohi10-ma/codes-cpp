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
    cout <<"Enter Seconfd Number: ";
    cin >>num_2;
    cout <<"Enter Third Number: ";
    cin >>num_3;
    //Declaring Variable to store the greatest number
    int num_great;
    //Using if-else to find out the greatest number
    if(num_1 > num_2 && num_1 > num_3){
        num_great=num_1;
    }
    else if(num_2 > num_1 && num_2 > num_3){
        num_great=num_2;
    }
    else{
        num_great=num_3;
    }
    //Printing the Greatest number as output
    cout <<endl<<"The Greatest Number is \'"<<num_great<<"\'";

    return 0;
}