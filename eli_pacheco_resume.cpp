

// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "This is a practice string" << endl;
  myfile.close();
  return 0;
}