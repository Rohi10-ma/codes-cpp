#include<iostream>
using namespace std;

template<class T>
class P
{
    T number;
    T name;
    public:
        P(T number, T name){
            this->name= name;
            this->number= number;
        }
        void display()
        {
            cout<<"Number : "<<number<<endl;   
            cout<<"Name : "<<name<<endl;      
        }
        
};
int main()
{
    P<int> p1(1,5);
    P<string> p2("Ahmad","Qayum");
    p2.display();
    p1.display();

    return 0;
}