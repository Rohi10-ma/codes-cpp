#include<iostream>
#include<fstream>
using namespace std;

int main(){
  // Create ofstream object
  ofstream outfile;   
  outfile.open("14_myfile.txt");      
  outfile.close();                    // Disconnect from stream
  //Here after disconnect, you can connect other files (Many times)
  
  // Create ifstream object
  ifstream infile;   
  infile.open("14_myfile.txt");      // Open File, and 
                                      // Attach file to input stream
  infile.close();                     // Disconnect from stream

}
