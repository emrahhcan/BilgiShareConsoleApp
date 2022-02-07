#ifndef _Company_hpp_
#define _Company_hpp_

#include <iostream>
#include <string>

using namespace std;

class Company {
    private:
        int companyTel;
        string companyTelAreaCode;
        string companyName;

    public:
        Company();
        Company(string, string, long);
        string getCompanyName();
        string getCompanyTelAreaCode();
        void setCompanyTel(long);
        void companyInfo();
};

#endif