#include<iostream>
#include<string>

using namespace std;

class Employee{
    private:
        string empName;
        string jobTitle;
        int empID;
        int hoursWorked;
        
    public:
        // Default constructor
        Employee(){
            empName = "Not set";
            jobTitle = "Not set";
            empID = 0;
            hoursWorked = 0;      
        }
        
        // Getter and Setter
        void setEmpName(string name){ 
            this->empName = name;}
        string getEmpName(){return empName;}
        
        void setJobTitle(string title){this->jobTitle = title;}
        string getJobTitle(){return jobTitle;}
        
        void setEmpID(int id){this->empID = id;}
        int getEmpID(){return empID;}
        
        void setHoursWorked(int hours){this->hoursWorked = hours;}
        int getHoursWorked(){return hoursWorked;}
        
        // Calculate employee salary
        void calculateSalary(){
            const int hourlyRate = 30;
            const int overTimeRate = hourlyRate*2;
            int salary;
            int overTime;
            
            if(hoursWorked <= 40){
                salary = hoursWorked * hourlyRate;
            }
            else {
                overTime = hoursWorked - 40;
                salary = 40 * hourlyRate;
                overTime *= overTimeRate;
                salary += overTime;
            }
            // Display employee information
            displayEmployeeData(salary);
        }
        
        // Display employee information
        void displayEmployeeData(int salary){
            cout<<"Employee Name: "<<empName<<endl;
            cout<<"Job Title: "<<jobTitle<<endl;
            cout<<"Employee ID: "<<empID<<endl;
            cout<<"Hours Worked: "<<hoursWorked<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout << endl;
        }
};

int main()
{
    int numEmployees;
    string empName;
    string jobTitle;
    int empID;
    int hoursWorked;
    
    cout<<"How many employees work in the company: ";
    cin>>numEmployees;
    
    Employee emp[numEmployees];
    
    // Taking input from user
    for(int i=0; i<numEmployees; i++){
        cin.ignore();
        cout<<"Enter the name of Employee "<<i+1<<": ";
        getline(cin, empName);
        emp[i].setEmpName(empName);
        
        cout<<"Enter the job title for Employee "<<i+1<<": ";
        cin>>jobTitle;
        emp[i].setJobTitle(jobTitle);
        
        cout<<"Enter the ID number for Employee "<<i+1<<": ";
        cin>>empID;
        emp[i].setEmpID(empID);
        
        cout<<"Enter the number of hours worked for Employee "<<i+1<<": ";
        cin>>hoursWorked;
        emp[i].setHoursWorked(hoursWorked);
    }
    
    // Calculate and display employee salaries
    for(int i=0; i<numEmployees; i++){
        emp[i].calculateSalary();
    }
    
    return 0;
}
