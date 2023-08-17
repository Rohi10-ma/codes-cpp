#include<iostream>
using namespace std;

int main(){
    int Calculus, Physics, English, Urdu, Programming, Psycology;

    cout<<"Enter Marks Obtained in Calculus= ";
    cin>>Calculus;

    cout<<"Enter Marks Obtained in English= ";
    cin>>English;

    cout<<"Enter Marks Obtained in Physics= ";
    cin>>Physics;

    cout<<"Enter Marks Obtained in Programming= ";
    cin>>Programming;

    cout<<"Enter Marks Obtained in Psycology= ";
    cin>>Psycology;

    cout<<"Enter Marks Obtained in Urdu= ";
    cin>>Urdu;

    int Sum, Percentage;

    Sum=Calculus+Physics+English+Urdu+Programming+Psycology;

    Percentage= (Sum*100)/600;

    cout<< "Your Total Obtained Marks are="<<Sum<<endl;

    cout<< "Your Percentage is="<<Percentage<<endl;

    if(Percentage>=80){
        cout<<"Your Grade is A";
    }
    else if(Percentage>=70){
        cout<<"Your Grade is B";
    }
    else if(Percentage>=60){
        cout<<"Your Grade is C";
    }
    else if(Percentage>=50){
        cout<<"Your Grade is D";
    }
    else if(Percentage>=40){
        cout<<"Your Grade is E";
    }
    else{
        cout<<"Your Grade is F. You Failed LOL";
    }

    return 0;
}