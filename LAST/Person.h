#include <string>

class Person {
public:
    std::string fname;
    std::string lname;
    std::string gender;
    std::string emailAdd;
    std::string cpNumber;

    void setFname(std::string fn) { fname = fn; }
    std::string getFname() { return fname; }

    void setLname(std::string ln) { lname = ln; }
    std::string getLname() { return lname; }

    void setGender(std::string g) { gender = g; }
    std::string getGender() { return gender; }

    void setEmailAdd(std::string email) { emailAdd = email; }
    std::string getEmailAdd() { return emailAdd; }

    void setCpNumber(std::string cp) { cpNumber = cp; }
    std::string getCpNumber() { return cpNumber; }
};
