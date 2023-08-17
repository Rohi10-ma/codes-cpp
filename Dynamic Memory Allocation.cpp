#include<iostream>

using namespace std;

int main(){

    int sizeArray;
    int *ptrArray;

    cout<<"Enter The number of items(Size Of Array): ";
    cin>>sizeArray;

    ptrArray = new int[sizeArray];

    cout<<"Enter Values to be Entered in Array: "<<endl<<endl;
    for(int i=0;i<sizeArray;i++){

        cout<<"Enter Value at "<<": "<<i;
        cin>>ptrArray[i];
    }
    for(int i=0;i<sizeArray;i++){

        cout<<"Entered Value at "<<i<<": "<<endl;

    }


}