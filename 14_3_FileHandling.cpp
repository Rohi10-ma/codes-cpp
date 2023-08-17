#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string filename = "14_myfile.txt";
  //ofstream outfile(filename);
  ofstream outfile(filename);

  outfile<<"Ali"<<endl;
  outfile<<"Ahmad"<<endl;
  outfile<<"Khalid Abbas";
  outfile.close();
  
  ifstream infile(filename);
  string name;
  infile>>name;
  cout<<name<<endl;

  cin>>name;
  infile>>name;
  cout<<name<<endl;

  infile>>name;
  cout<<name<<endl;

  infile>>name;
  cout<<name<<endl;

  infile.close();
}
