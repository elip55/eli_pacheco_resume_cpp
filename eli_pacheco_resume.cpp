


// basic file operations
#include <iostream>
#include <fstream>
#include <map>
using namespace std; 

string header, name, location, pn, email, education; // global variables 

void make_header();
void write_edu();

int main(){
    make_header();
    return 0;
}


void make_header(){
    name = "\tEli Pacheco\n";
    location = "\tAlbuquerque, NM\n";
    pn = "\t(505) 321 - 5922\n";
    email = "\teli.pacheco55@outlook.com\n";
    header.append(name + location + pn + email);
}

void write_edu(){
}