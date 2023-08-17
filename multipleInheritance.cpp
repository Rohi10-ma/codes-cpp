#include<iostream>

using namespace std;

class Student{
 protected:
    string name;
    int marks;

        public:
         Student(string name, int marks){
            this ->marks = marks;
            this ->name = name;
         }

};

class Teacher{
 protected:
    string name;
    int salary;

        public:
        Teacher(string name, int marks){
            this ->name=name;
            this ->salary=salary;
        }

};

class TA: public Student, protected Teacher{
    public:
    TA(string name, int marks, int salary): Student(name, marks), Teacher(name, salary){

    }

    void display(){
        cout<<"Name: "<<TA::name<<endl;   
        cout<<"Marks "<<TA::marks<<endl;  
        cout<<"Salary "<<TA::salary<<endl;  
    }

};

int main(){
    TA TeacherAssist("Rohail", 514, 2000);
    TeacherAssist.display();

    return 0;
}