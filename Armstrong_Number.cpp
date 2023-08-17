#include<iostream>

using namespace std;

int main(){
    
    // Declaring Variables
    int number;    //'number' for taking a number as Input 
    int digit;    // 'digit' for the digits of the number
    int sum=0;   // 'sum' for the sum of digits of the number
    
    cout<<"Enter a Number To Be Checked If Armstrong or Not: ";
    cin>>number; // Taking Input from User

    //Check is a variable that is to be used in the while loop below
    int check=number; 

    while(check > 0){
        //Separating each digit
        digit=check%10; 
        //Taking cube of each digit and adding it to the value of sum
        sum+=digit*digit*digit; 
        //Dividing the number by 10
        check/=10;
    }
    if(sum == number){

        cout<<"The Entered Number \'"<<number<<"\' is an Armstrong";
        
    }
    else{

        cout<<"The Entered Number \'"<<number<<"\' is not an Armstrong";
    }

    return 0;
}