#include <iostream>
#include <string>
using namespace std;

class divisionByZero //: public runtime_error
{
private:
    string message;
public:

    //In case using inheritance, remove all other constructor and what method
    //divisionByZero(const std::string& message) : runtime_error(message) {} 

    divisionByZero()
    {
        message = "Division by zero";
    }
    divisionByZero(string str)
    {
        message = str;
    }
    string what()
    {
        return message;
    }
};

void doDivision() throw (divisionByZero)
{
    int dividend, divisor, quotient;
    cout << "Line 8: Enter the dividend: ";
    cin >> dividend;
    cout << endl;
    cout << "Line 11: Enter the divisor: ";
    cin >> divisor;
    cout << endl;
    if (divisor == 0)
        throw divisionByZero("Found division by 0!");
    quotient = dividend / divisor;
    cout << "Line 17: Quotient = " << quotient << endl;
}

int main()
{
    try
    {
        doDivision();
    }
    catch (divisionByZero divByZeroObj)
    {
        cout << "Line 22: In main: " << divByZeroObj.what() << endl;
    }
    return 0;
}
