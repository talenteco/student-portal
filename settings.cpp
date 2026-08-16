#include <bits/stdc++.h>
using namespace std;

struct Settings {
    bool notifications = true;
    string theme = "light";
};

int main() {
    Settings userSettings;
    cout << "Notifications: " << userSettings.notifications << ", Theme: " << userSettings.theme << endl;
    toggleNotifications(userSettings);
    changeTheme(userSettings, "dark");
    cout << "Updated -> Notifications: " << userSettings.notifications << ", Theme: " << userSettings.theme << endl;
    return 0;
}