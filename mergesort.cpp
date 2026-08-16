#include <iostream>
#include <vector>

using namespace std;

int charStarToInt(char *c){
    

    int val =0 ;
    while(*c){
    
    if(*c<'0'||*c>'9') return -1;

    if(val > (INT_MAX-(*c - '0')) / 10){
            return -1;
        }
    
    val=val*10+(*c-'0');
    c++;

    }
    
    return val;
}

int main(int argc, char* argv[]){

    vector <int> student_ID ;
    while(argv){
        student_ID.push_back(charStarToInt(argv));
        argv++;
    }

    

    mergesort(student_ID, 0, student_ID.size()-1);

    cout << "Here's the FINAL sorted array\n";

    for(int x: arr) cout << x << " ";

    cout << "\n";

}