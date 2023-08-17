#include<iostream>

using namespace std;

class myClass{
    public:
        int a;
        float b;
        //Default Constructor
        myClass(){
            a=0;
            b=0.0f;
        }

        //One Parameter Constructor(Using 'this')
        myClass(int a){
            this->a=a;
            this->b=0.0f;
        }
        //Two Parameter Constructor(Using 'this')
        myClass(int a, float b){
            this->a=a;
            this->b=b;
        }
        //Three Parameter Constructor(Using 'this')
        myClass(int a, float b, char c='A'){
            this->a=a;
            this->b=b;
            cout<<"Argument Three= "<<c<<endl;
        }
        //Two Integer Argument Method

        void myMethod(int a1, int a2){

            cout<<"Int Argument 1 = "<<a1<<", Int Argument 2 = "<<a2<<endl;

        }
        //Two float Argument Method
        void myMethod(float a1, float a2){

            cout<<"Float Argument 1 = "<<a1<<", Float Argument 2 = "<<a2<<endl;

        }
        
};

int main(){

    myClass Obj1;
    //Default Constructor
    cout <<"Obj1.a: "<<Obj1.a<<", Obj1.b: "<<Obj1.b<<endl;

    myClass Obj2(5);
    //One Parameter Constructor
    cout<<"Obj2.a: "<<Obj2.a<<", Obj2.b: "<<Obj2.b<<endl;

    myClass Obj3(7, 3.14f, 'L');
    //Two Parameter Constructor
    cout<<"Obj3.a: "<<Obj3.a<<", Obj3.b: "<<Obj3.b<<endl;

    myClass Obj4(7, 3.14f, 'R');
    //Three Parameter Constructor
    cout<<"Obj4.a: "<<Obj4.a<<", Obj4.b: "<<Obj4.b<<endl;


    //Method with two integer arguments
    Obj1.myMethod(8, 2);
    //Method with two float arguments
    Obj1.myMethod(3.8f, 3.5f); 

    return 0;
}