#include "BilgiShare.hpp"
#include "Member.hpp"

void UIHeaderLines();
void membership();

// Global Variables
vector<string> usernames;
vector<string> passwords;
int yourChoice;
string username;
string password;
char yesOrNo;

Company company("Bilgi Soft", "+90", 2125762343);
BilgiShare firstSubDiary("Bilgi Soft", "+90", 2125762343, "Bilgi Share", "Social Media");
BilgiShare secondSubDiary("Bilgi Soft", "+90", 2125762343, "Bilgi Tube", "Entertainment");
Member members("Bilgi Soft", "+90", 2125762343, "Ahmet", "ahmet123");

int main() {
    UIHeaderLines();
    company.companyInfo();
    cout << "---------------------------------------" << endl;
    
    cout << "Your Choice = ";
    cin >> yourChoice;
    cout << endl;
    if (yourChoice == 1) {
        firstSubDiary.subDiaryInfo();
        membership();
    }
    else if (yourChoice == 2) {
        secondSubDiary.subDiaryInfo();
        membership();
    }
    UIHeaderLines();

}

void UIHeaderLines() {
    cout << endl;
    cout << "************************************************";
    cout << endl;
}

// Functions which helps us to be member to our products
void membership() {
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "Would you like to join us? (Y/N) => ";
    cin >> yesOrNo;
    switch (yesOrNo) {
        case 'Y':
            cout << "Username: ";
            cin >> username;
            members.setMemberName(username);
            usernames.push_back(members.getMemberName());
            cout << endl;

            cout << "Password: ";
            cin >> password;
            members.setMemberPass(password);
            passwords.push_back(members.getMemberPass());
            cout << endl;

            cout << "See all members" << endl;
            cout << "---------------------------------------" << endl;
                
            cout << "Usernames" << endl;
            for (int i = 0; i < usernames.size(); i++) {
                cout << usernames[i] << endl;
            }
            cout << "Passwords" << endl;
            for (int i = 0; i < passwords.size(); i++) {
                cout << passwords[i] << endl;
            }

            break;
        case 'N':
            break;
        default:
            break;
    }
}