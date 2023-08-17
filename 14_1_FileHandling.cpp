#include<iostream>
#include<fstream>
using namespace std;


int main(){
  //Create ofstream object
  ofstream outfile("14_myfile.txt");  // Create File if not exist, otherwise overwrite it
                                      // Open File, and 
                                      // Attach file to output stream
  outfile.close();                    // Disconnect from stream

  //Create ifstream object
  ifstream infile("14_myfile.txt");   // Open File, and 
                                      // Attach file to input stream
  infile.close();                     // Disconnect from stream

}
