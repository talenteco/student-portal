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


int main(int argc, char* argc) {
    map<string, Profile> accountDetails={{"std_a",{"std_a", "1", "CSE"}},
                                        {"std_b",{"std_b", "2", "CSIS"}},
                                        {"std_c",{"std_c", "3", "VLSI"}}};


    Profile student;
    student = accountDetails[argc[1]];

    displayProfile(student);
    updateBranch(student, "CSE-AI");
    cout << "\nAfter update:\n";
    displayProfile(student);
    return 0;
}