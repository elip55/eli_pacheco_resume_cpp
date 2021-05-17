


// basic file operations
#include <iostream>
#include <fstream>
#include <map>
using namespace std; 

string name, location, pn, email;

void write_header(){
    ofstream header;
    name = "\tEli Pacheco\n";
    location = "\tAlbuquerque, NM\n";
    pn = "\t(505) 321 - 5922\n";
    email = "\teli.pacheco55@outlook.com\n";
    header.open("Header.txt");
    header << name;
    header << location;
    header << pn;
    header << email; 
    header.close();
}

void write_edu(){
    ofstream edu;
}
int main(){
    write_header();
    return 0;
}