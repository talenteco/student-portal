#include <bits/stdc++.h>
using namespace std;

map<string, int> grades = {{"DSA", 85}, {"OS", 78}, {"DBMS", 90}};

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

int main(int argc, char* argv[]) {
    if(argv[1])printSummary();
    return 0;
}