#include <bits/stdc++.h>
#include <string>

using namespace std;

//dummy account creds
map<string, string> stored_credentials={{"std_a","abc"},
                                        {"std_b","123"},
                                        {"std_c","pass@123"} };


struct login{
    string name;
    string password;
} ;



int main(int argc, char* argv[]){

    login student;
    student.name = argv[1];
    student.password = argv[2];

    if(stored_credentials[student.name]!=student.password) cout<<"INCORRECT ID OR PASSWORD";
    else cout<<"Logged in Successfully";
}