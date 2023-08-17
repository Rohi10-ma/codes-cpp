#include<iostream>

using namespace std;

class A{
    
    private:
    int p1, p2;
    
    protected:
    int p1,p2;
    
    public:
    int p1, p2;

    this ->p1=p1;
    this ->p2=p2;


};
class B: protected A{
    void function(){
        int a;
        a = privateaA;
        a = proaA;
        a = pubaA;
    }
};

int main(){

    B objB;


}
