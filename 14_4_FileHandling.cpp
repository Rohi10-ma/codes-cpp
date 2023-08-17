#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;

int main() {
    string filename = "14_myfile.txt";
    ifstream infile(filename);
    
    if (infile.is_open()) {
        string line;
        
        while (getline(infile, line)) {
            stringstream sstream(line);
            string word;

            // The >> operator extract each word from stringstream. 
            // This operator reads the next word from the stream and 
            // stores to variable "word". If no more words left in 
            // stream, >> returns false and terminates the loop.
            while (sstream >> word) { 
            //while (getline(sstream, word, ',')) { // Use delimiter other than space
                    
                cout<<word<<endl;
            }
            cout<<endl;

            if (infile.eof()) {
                break;
            }
        }

        infile.close();

    }
    else {
        cout << "Failed to open file." << endl;
    }

    return 0;
}
