#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string filename = "14_myfile.txt";

    ofstream outfile(filename);
    // Use put to write a character to the file
    outfile.put('A');
    outfile.write("\nFull Line writing", 13);  //Write line with size
    outfile.close();

    ifstream infile(filename);
    // Use get to read a character from the file
    char c;
    infile.get(c);
    cout<<"First character: "<<c<< endl;
    //string line;
    //getline(infile, line); //Read full line to string variable "line"
    
    infile.close();

    return 0;
}
