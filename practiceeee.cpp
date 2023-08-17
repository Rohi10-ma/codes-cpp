#include<iostream>
using namespace std;

namespace Rohail
{
    void display()
    {
        cout<<"ROHAIL"<<endl;
    }
    class Ahmad
    {
        public:
            void display()
            {
                cout<<"AHMAD"<<endl;
            }
    };
    

}

int main()
{
    Rohail::display();
    Rohail::Ahmad obj;
    obj.display();
}