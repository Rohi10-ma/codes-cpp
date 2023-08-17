//When a function with the same name works in different ways.
#include<iostream>

using namespace std;

class A{
    private:
        int n;
    public:
        void in(){
            cout<<"Enter the Value: "<<endl;
            cin>>n;
        }
        void out(){
            cout<<"The Value is: "<<n<<endl;
        }
};

int main(){
    A *ptr;
    ptr =  new A;
    // "->" is member access operator NOT "this"
    ptr->in();
    ptr->out();
}