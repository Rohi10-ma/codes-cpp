#include<iostream>

using namespace std;

int main(){
    //Declaring variable to store user's input
    int number;
    //Taking Input from user
    cout<<"Enter a 3-digit Number to be Reversed: ";
    cin>>number;

    //This will be the one's place digit of the reversed number
    int c=number/100;
    number=number%100;
    
    //This will be the ten's place digit of the reversed number
    int b=number/10;
    number=number%10;
    
    //This will be the hundred's place digit of the reversed number
    int a=number;
    
    //This will be the reversed number
    int reversed=(a*100)+(b*10)+(c);
    
    //Displaying the result
    cout<<endl<<"The Given Number Reversed is "<<reversed;

    return 0;
}