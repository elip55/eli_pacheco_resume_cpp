


// basic file operations
#include <list>
#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <utility>
using namespace std; 

string header, education, internships; // global variables 

void importHeader();
void importEDU();
void importInternships();
void importSkills();

int main(){
    ofstream resume; 
    importHeader();
    importEDU();
    importInternships();
    resume.open("eli_pacheco_resume.txt");
    resume << header;
    resume << education;
    resume << internships;
    resume.close();

    return 0;
}

void importHeader(){
    string name, location, pn, email;
    name = "\tEli Pacheco\n";
    location = "\tAlbuquerque, NM\n";
    pn = "\t(505) 321 - 5922\n";
    email = "\teli.pacheco55@outlook.com\n\n";
    header.append(name + location + pn + email);
}

void importEDU(){
    education = "EDUCATION:\n";
    map<string, string> schools;

    schools["1 University of New Mexico"] = "BS, Computer Science";
    schools["3 \tCurrent GPA"] = "3.67\n";
    schools["2 \tExpected Grad Date"] = "2023";
    schools["4 New Mexico State University"] = "BA, Creative Media";
    schools["6 \tGPA"] = "3.2";
    schools["5 \tGraduated"] = "2015";
    
    map<string, string>:: iterator letsgo;
    for(letsgo=schools.begin(); letsgo!=schools.end(); ++letsgo){
        education.append(letsgo->first + ": " + letsgo->second + "\n");
    }
}

void importInternships(){
    string apl_action1, apl_action2, apl_action3;
    internships = "\nINTERNSHIPS AND CAREER EXPERIENCE:\n";

    internships.append("Sandia National Labs - Advanced Materials Laboratory Science, June 2021 - Present\n");

    internships.append("Apple - Firmware & Software Engineering, Jan 2021- June 2021\n");
    apl_action1 = "\t- Worked closely with developers to write and adapt tools, in python, to help firmware teams read through logs more efficiently.";
    apl_action2 = "\t- Systematically troubleshot hardware, using proprietary applications, to delve into systems and correct behavior.";
    apl_action3 = "\t- Used Git and GitHub to create, edit, and push local branches to the remote repo.";
    
    internships.append(apl_action1 + "\n" +  apl_action2 + "\n" + apl_action3 + "\n");
}

void importSkills(){
  // TODO: this 
}