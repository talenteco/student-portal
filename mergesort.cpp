#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char* argv[]){
    

    vector <int> student_ID = {8,2,3,4,22,4,112,4,1};

    mergesort(student_ID, 0, student_ID.size()-1);

    cout << "Here's the FINAL sorted array\n";

    for(int x: arr) cout << x << " ";

    cout << "\n";

}