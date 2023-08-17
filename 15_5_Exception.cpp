#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "Testing string exceptions!";
    string str1, str2, str3;
    try {
        cout << "Line 5: " << sentence << endl;
        cout << "Line 6: " << sentence.length() << endl;
        str1 = sentence.substr(8, 10);
        cout << "Line 8: " << str1 << endl;
        str2 = sentence.substr(28, 18);
        cout << "Line 10: " << str2 << endl;
        str3 = "Exception handling.";
        cout << "Line 12: " << str3 << sentence << endl;
    }
    catch(exception& re)
    {
        cout << "Exception: " << re.what() << endl;
    }

    return 0;
}
