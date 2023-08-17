#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    float temp_f;
    float temp_c;

    // Ask user for input temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    
    // Read temperature from user input
    cin >> temp_f;

    // Convert Fahrenheit to Celsius
    temp_c = (temp_f - 32) * 5 / 9;

    // Output the temperature in Celsius
    cout << temp_f << " Fahrenheit in Celsius: " << temp_c;

    return 0;
}
