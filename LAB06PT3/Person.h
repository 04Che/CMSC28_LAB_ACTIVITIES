#include <string>

class Person {
private:
    std::string P_firstName;
    std::string P_lastName;
    std::string P_gender;

public:
    Person(const std::string& fName = "", const std::string& lName = "", const std::string& gen = "")
        : P_firstName(fName), P_lastName(lName), P_gender(gen) {}

    void setFirstName(const std::string& fName) { P_firstName = fName; }
    void setLastName(const std::string& lName) { P_lastName = lName; }
    void setGender(const std::string& gen) { P_gender = gen; }

    std::string getFirstName() const { return P_firstName; }
    std::string getLastName() const { return P_lastName; }
    std::string getGender() const { return P_gender; }
};

