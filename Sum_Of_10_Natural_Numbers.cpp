#include<iostream>

using namespace std;

int main(){

    int number=1;
    int sum=0;

    cout<<"First Ten Natural Numbers are:"<<endl;

    for(int i=0;i++;i<=10){

        number=number + i;
        cout<<number<<endl;
        sum=sum + number;     
    }

    cout<<"Sum of First Ten Natural Numbers= "<<sum;

    return 0;
}