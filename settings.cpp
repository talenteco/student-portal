#include <bits/stdc++.h>
using namespace std;

struct Settings {
    bool notifications = true;
    string theme = "light";
};


void toggleNotifications(Settings &s) {
    s.notifications = !s.notifications;
}


void changeTheme(Settings &s, string newTheme) {
    s.theme = newTheme;
}

bool checkIfEmpty(int a){
    if(a<2) return true;
    return false;
}

int main(int argc,  char* argv[]) {
    bool a = checkIfEmpty(argc);
    if(a) cout<<"Incorrect number of arguments, retry"<<endl;
    Settings userSettings;
    cout << "Notifications: " << userSettings.notifications << ", Theme: " << userSettings.theme << endl;
    toggleNotifications(userSettings);
    changeTheme(userSettings, "dark");
    cout << "Updated -> Notifications: " << userSettings.notifications << ", Theme: " << userSettings.theme << endl;
    return 0;
}