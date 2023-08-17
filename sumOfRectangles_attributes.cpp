#include<iostream>
using namespace std;

class Rectangle1{

    private:
        int length;
        int width;
    public:
    Rectangle1(int length,int width){
        this->length=length;
        this->width=width;
    }
    int gethLength(){
        return length;
    }
    int gethWidth(){
        return width;
    }
};
class Rectangle2{

    private:
        int length;
        int width;
    public:
    Rectangle2(int length,int width){
        this->length=length;
        this->width=width;
    }
    int gethLength(){
        return length;
    }
    int gethWidth(){
        return width;
    }
};
class Rectangle3{

    private:
        int length;
        int width;
    public:
    Rectangle3(int length,int width){
        this->length=length;
        this->width=width;
    }
    int gethLength(){
        return length;
    }
    int gethWidth(){
        return width;
    }
    
};
class Rectangle4{

    private:
        int length;
        int width;
    public:
    Rectangle4(int length,int width){
        this->length=length;
        this->width=width;
    }
    int gethLength(){
        return length;
    }
    int gethWidth(){
        return width;
    }
    
};
void Sum(){
    int arrayOfLength[4],arrayOfWidth[4];
    for(int i=0;i<4;i++)
    {
        cout<<"Enter Length of Rectangle"<< i+1<<" :"<<endl;
        cin>>arrayOfLength[i];
    }
    for(int i=0;i<4;i++){

        cout<<"Enter Width of Rectangle"<< i+1<<" :"<<endl;
        cin>>arrayOfWidth[i];
    }
    Rectangle1 R1(arrayOfLength[0], arrayOfWidth[0]);
    Rectangle2 R2(arrayOfLength[1], arrayOfWidth[1]);
    Rectangle3 R3(arrayOfLength[2], arrayOfWidth[2]);
    Rectangle4 R4(arrayOfLength[3], arrayOfWidth[3]);
    
    int sumOfLengths=R1.gethLength()+R2.gethLength()+R3.gethLength()+R4.gethLength();
    int sumOfwidths=R1.gethWidth()+R1.gethWidth()+R1.gethWidth()+R1.gethWidth();
    cout<<"             Length    Width"<<endl<<endl;
    cout<<"Rectangle 1 :   "<<R1.gethLength()<<"       "<<R1.gethWidth()<<endl;
    cout<<"Rectangle 2 :   "<<R2.gethLength()<<"       "<<R2.gethWidth()<<endl;
    cout<<"Rectangle 3 :   "<<R3.gethLength()<<"       "<<R3.gethWidth()<<endl;
    cout<<"Rectangle 4 :   "<<R3.gethLength()<<"       "<<R4.gethWidth()<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"        Sum :   "<<sumOfLengths<<"       "<<sumOfwidths<<endl;
    cout<<"-------------------------------------------"<<endl;
    
}
int main(){
    Sum();
    return 0;
}
