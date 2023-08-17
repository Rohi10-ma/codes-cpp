#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // While Usig the combination of "in" and "out" also works as append mode,
    // when writing, the append will be done where the cursor is pointing
    fstream file("14_myfile.txt", ios::in | ios::out);
    
    
    // Read from the file
    string line;
    getline(file, line);
    cout<<line<<endl;

    // Write to the file
    file<<"New line added to file.";

    // Close the file
    file.close();

    return 0;
}
