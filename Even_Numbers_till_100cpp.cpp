#include<iostream>

using namespace std;

int main(){
   //Declaring Variables 
   int number;//'number' for even numbers

   cout <<"Even Numbers from 1 to 100"<<endl;
   //Using 'for loop' 
   for(number=1;number<=100; number++){
    //Using 'if condition' to check whether the number is even
    if(number%2==0){
        //Printing the value of number if condition is met
        cout <<"\'"<<number<<"\'"<<endl;
    }

   }

    return 0;
}