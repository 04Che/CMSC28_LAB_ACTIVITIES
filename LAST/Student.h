#include "Person.h"

class Student : public Person {
private:
    std::string studentNum;

public:
    std::string Course;
    std::string Department;
    std::string College;

    void setStudentNum(std::string sn) { studentNum = sn; }
    std::string getStudentNum() { return studentNum; }

    void setCourse(std::string c) { Course = c; }
    std::string getCourse() { return Course; }

    void setDepartment(std::string d) { Department = d; }
    std::string getDepartment() { return Department; }

    void setCollege(std::string co) { College = co; }
    std::string getCollege() { return College; }
};

