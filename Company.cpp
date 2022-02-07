#include "Company.hpp"

string subDiaries[] = {"Bilgi Share", "Bilgi Tube"};

Company::Company() {
    companyName = "Bilgi Soft";
    companyTelAreaCode = "+90";
    companyTel = 2125762343;
}
Company::Company(string companyName, string companyTelAreaCode, long companyTel) {
    this->companyTel = companyTel;
    this->companyTelAreaCode = companyTelAreaCode;
    this->companyName = companyName;
}
string Company::getCompanyName() {
    return companyName;
}
string Company::getCompanyTelAreaCode() {
    return companyTelAreaCode;
}
void Company::setCompanyTel(long companyTel) {
    this->companyTel = companyTel;
}
void Company::companyInfo() {
    cout << "Welcome to the " << companyName << endl
         << "For more information please dial " 
         << companyTelAreaCode << companyTel << endl
         << "---------------------------------------" << endl
         << "For our sub diaries click" << endl
         << "(1) " << subDiaries[0] << " - (2) " << subDiaries[1] << endl;
}