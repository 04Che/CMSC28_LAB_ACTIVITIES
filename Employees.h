#include "Person.h"

class Employees : public Person {
private:
    std::string empNum;

public:
    std::string Position;
    std::string OfficeUnit;
    float Salary;

    void setEmpNum(std::string en) { empNum = en; }
    std::string getEmpNum() { return empNum; }

    void setPosition(std::string p) { Position = p; }
    std::string getPosition() { return Position; }

    void setOfficeUnit(std::string ou) { OfficeUnit = ou; }
    std::string getOfficeUnit() { return OfficeUnit; }

    void setSalary(float s) { Salary = s; }
    float getSalary() { return Salary; }
};
