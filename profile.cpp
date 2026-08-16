#include <bits/stdc++.h>
using namespace std;

struct Profile {
    string name;
    string roll_no;
    string branch;
};

void displayProfile(Profile p) {
    cout << "Name: " << p.name << "\nRoll No: " << p.roll_no << "\nBranch: " << p.branch << endl;
}

void addStudentDetails(Profile P, map<string, Profile>& account_details){
    account_details[P.name] = P;

}

void updateBranch(Profile &p, string newBranch) {
    p.branch = newBranch;
}

bool checkIfEmpty(Profile P){
    if(P.name=="") return true;
    return false;
}


int main(int argc, char* argv) {
    map<string, Profile> accountDetails={{"std_a",{"std_a", "1", "CSE"}},
                                        {"std_b",{"std_b", "2", "CSIS"}},
                                        {"std_c",{"std_c", "3", "VLSI"}}};


    Profile student;
    student = accountDetails[argv[1]];
    if(checkIfEmpty(student)) cout<<"Invalid input"<<endl;

    if(!accountDetails.count(student.name)) addStudentDetails(student, accountDetails);

    displayProfile(student);

    updateBranch(student, "CSE-AI");
    cout << "\nAfter update:\n";

    displayProfile(student);
    return 0;
}