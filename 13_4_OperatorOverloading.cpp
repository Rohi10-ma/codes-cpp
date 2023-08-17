#include<iostream>
using namespace std;

class myClass {
public:
    myClass(){
      value = 0;
    }
    myClass& operator++() {
        // increment the value of the object
        value++;
        // return a reference to the object
        return *this;
    }
    int value;
};

int main(){
  myClass a;
  cout<<a.value<<endl;
  ++a;
  cout<<a.value<<endl;
  return 0;
}
