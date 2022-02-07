#include "BilgiShare.hpp"

BilgiShare::BilgiShare(string companyName, string companyTelAreaCode, long companyTel, string subDiaryName, string definition) {
    this->subDiaryName = subDiaryName;
    this->definition = definition;
}
string BilgiShare::getSubDiaryName() {
    return subDiaryName;
}
string BilgiShare::getDefinition() {
    return definition;
}
void BilgiShare::subDiaryInfo() {
    cout << "Sub Diary Name: " << subDiaryName << endl
         << "Related Field: " << definition << endl
         << "Powered By " << Company::getCompanyName() << endl;
}