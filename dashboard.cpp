#include <bits/stdc++.h>
using namespace std;

map<string, int> grades = {{"DSA", 85}, {"OS", 78}, {"DBMS", 90}};

//TO DO
void addSubject(string s){

}

double calculateAverage() {
    int sum = 0;
    for (auto &p : grades) sum += p.second;
    return (double)sum / grades.size();
}

void printSummary() {
    cout << "Course Grades:\n";
    for (auto &p : grades) cout << p.first << ": " << p.second << endl;
    cout << "Average: " << calculateAverage() << endl;
}

bool checkIfEmpty(int a){
    if(a<2) return true;
    return false;
}

int main(int argc, char* argv[]) {
    if(checkIfEmpty(argc)){
        cerr<<"Incorrect number of arguments"<<endl;
        exit(1);
    }
    if(argv[1])printSummary();
    return 0;
}