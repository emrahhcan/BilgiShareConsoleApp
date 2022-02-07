#include "Company.hpp"
#include <vector>

class Member: public Company {
    private:
        string memberName;
        string memberPass;
    public:
        Member(string, string, long, string, string);
        string getMemberName();
        string getMemberPass();
        void setMemberName(string);
        void setMemberPass(string);
        string usernames(vector<string>);
        string passwords(vector<string>);
        void memberInfo();
};