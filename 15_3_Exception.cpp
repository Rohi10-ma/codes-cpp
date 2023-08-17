#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient;
    string inpStr = "The input stream is in the fail state.";
    try
    {
        cout << "Line 4: Enter the dividend:";
        cin >> dividend;
        cout << endl;
        cout << "Line 7: Enter the divisor:";
        cin >> divisor;
        cout << endl;
        if (divisor == 0)
            throw divisor;
        
        else if (divisor < 0)
            throw string("Negative divisor.");
        
        else if (!cin)
            throw inpStr;
        quotient = dividend / divisor;
        cout << "Line 17: Quotient: "<<quotient<<endl;
    }

    catch (int x)
    {
        cout << "Line 19: Division by " << x << endl;
    }
    catch (string s)
    {
        cout << "Line 21:"<<s<<endl;
    }
    catch (...) //Remove any catch, then check
    {
        cout << "An Exception Occurs"<<endl;
    }
    return 0;
} // end main