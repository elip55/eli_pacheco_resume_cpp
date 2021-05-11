

// basic file operations
#include <iostream>
#include <fstream>
using namespace std;


void thisfunction(){
  cout << "This is me remembering that c++ is more difficult than python" << endl;

}
int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "This is a practice string" << endl;
  myfile.close();
  thisfunction();
  return 0;
}