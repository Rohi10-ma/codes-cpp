#include<iostream>

using namespace std;

class A{
    public:
 //static int x=1;
    static int x;
    int y;
    static void print();
    ~A(){
        cout<<"The End Of Object"<<x<<"  "<<y<<endl;
    }
    A(){
        x=1;
        y=5;
        cout<<"Start  "<<x<<"    "<<y<<endl;
    }

};
int A::x;
void A::print(){
    cout<<"Static Print Functon " <<x<<endl;
}

int main(){

    A Obj1,Obj2;
    A::x++;
    Obj2.x++;
    Obj1.y++;

    cout<<Obj1.x<<endl;
    Obj2.print();

    A::print();
}