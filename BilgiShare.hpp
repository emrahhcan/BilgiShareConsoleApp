#include "Company.hpp"

class BilgiShare: public Company {
    private:
        string subDiaryName;
        string definition;
    public:
        BilgiShare(string, string, long, string, string);
        string getSubDiaryName();
        string getDefinition();
        void subDiaryInfo();
};