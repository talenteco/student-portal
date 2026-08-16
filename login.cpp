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
    string captcha;
} ;

bool checkValid(int a){
    if(a==3) return true;
    return false;
}

bool isItEmpty(string s){
    if (s==""){return true;}

    return false;
}

bool checkIfNotExistingUser(string s){
    if(stored_credentials.count(s)){return true;}
    else return false;
}

int main(int argc, char* argv[]){

    
    bool val = checkValid(argc);

    if(val){}
    else cout<<"Invalid input args";    
    
    login student;
    
    student.name = argv[1];
    bool a = isItEmpty(student.name);
    
    student.password = argv[2];
    bool b = isItEmpty(student.password);

    if(a||b) cout<<"Empty Username or Password is invalid";

    bool c = checkIfNotExistingUser(student.name);

    if(!c) cout<<"Student Username doesnt exist, contact student administrator for account creation";

    else if(stored_credentials[student.name]!=student.password) cout<<"INCORRECT ID OR PASSWORD";
    else cout<<"Logged in Successfully";

}