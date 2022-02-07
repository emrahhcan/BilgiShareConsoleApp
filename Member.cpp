#include "Member.hpp"

Member::Member(string companyName, string companyTelAreaCode, long companyTel, string memberName, string memberPass) {
    this->memberName = memberName;
    this->memberPass = memberPass;
}
// Getter-Setter for private vars
string Member::getMemberName() {
    return memberName;
}
string Member::getMemberPass() {
    return memberPass;
}
void Member::setMemberName(string memberName) {
    this->memberName = memberName;
}
void Member::setMemberPass(string memberPass) {
    this->memberPass = memberPass;
}
void Member::memberInfo() {
    cout << "Member's Name: " << memberName << endl
         << "Member's Password: " << memberPass << endl;
}