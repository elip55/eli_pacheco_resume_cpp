


// basic file operations
#include <list>
#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <utility>
using namespace std; 

string header, education, internships, pro_experience, skillset; // global variables 

void importHeader();
void importEDU();
void importInternships();
void importPro();
void importSkills();

int main(){
    ofstream resume; 
    importHeader();
    importEDU();
    importInternships();
    importPro();
    importSkills();
    resume.open("eli_pacheco_resume.txt");
    resume << header;
    resume << education;
    resume << internships;
    resume << pro_experience;
    resume << skillset;
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
    string sandia_action1, apl_action1, apl_action2, apl_action3;
    internships = "\nINTERNSHIPS AND CAREER EXPERIENCE:\n";

    internships.append("\tSandia National Labs - Advanced Materials Laboratory Science, June 2021 - Present\n");
    sandia_action1 = "\t *To be written*\n";
    internships.append(sandia_action1);
    
    internships.append("\n\tApple - Firmware & Software Engineering, Jan 2021- June 2021\n");
    apl_action1 = "\t\t- Worked closely with developers to write and adapt tools, in python, to help firmware teams read through logs more efficiently.";
    apl_action2 = "\t\t- Systematically troubleshot hardware, using proprietary applications, to delve into systems and correct behavior.";
    apl_action3 = "\t\t- Used Git and GitHub to create, edit, and push local branches to the remote repo.";
    
    internships.append(apl_action1 + "\n" +  apl_action2 + "\n" + apl_action3 + "\n");
}
void importPro(){
    string rtl_action1, rtl_action2, rtl_action3, vzw_action1, vzw_action2, vzw_action3;
    pro_experience = "\nPROFESSIONAL EXPERIENCE\n";

    pro_experience.append("\tApple - Operation, 2015-2020\n");
    rtl_action1 = "\t\t- Timely receiving and sending thousands of products within the confines of the store.\n";
    rtl_action2 = "\t\t- Adapting to an ever-changing market within hours or minutes to better serve our customers and clients.\n";
    rtl_action3 = "\t\t- Collaborating creative solutions, with a team, to placing a constantly expanding product line into dimensions that remain the same.\n\n";
    pro_experience.append(rtl_action1 + rtl_action2 + rtl_action3);

    pro_experience.append("\tVerizon - Small Business Specialist, 2015\n");
    vzw_action1 = "\t\t- Connected small/medium businesses within our technological ecosystem.\n";
    vzw_action2 = "\t\t- Conceptualized strategies with a team, aligned appointments, and maintained strong client relationships.\n";
    vzw_action3 = "\t\t- Learned proprietary software for tracking products and clients.\n";
    pro_experience.append(vzw_action1 + vzw_action2 + vzw_action3);
}
void importSkills(){
    skillset = "\nSKILLS\n--------------\n";
    string myskills[] = {"Python", "Computer Science", "Git + GitHub", "Regex" , "Operating systems" , "Mathematics" , "C and C++", "MATLAB", "SOLIDWORKS" };
    list<string> skills (myskills, myskills + sizeof(myskills) / sizeof(string) );
    for (list<string>::iterator it = skills.begin(); it != skills.end(); it++)
        skillset.append("\t" + *it + "" + "\n");
}