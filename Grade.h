#include <iostream>
#include <string>
using namespace std;

// ACTIVITY 2
class Grade {
private:
    string subject;
    float grade;

public:
    Grade(string sub, float grd) : subject(sub), grade(grd) {}

    void setSubject(string sub) {
        subject = sub;
    }

    string getSubject() const {
        return subject;
    }

    void setGrade(float grd) {
        grade = grd;
    }

    float getGrade() const {
        return grade;
    }

    string passOrFail() const {
        return (grade >= 60) ? "passed" : "failed";
    }

    void displayGrade() const {
        cout << "Subject: " << getSubject() << endl;
        cout << "Grade: " << getGrade() << "%" << endl;
        cout << "Status: Your grade " << getGrade() << "% for the subject " << getSubject() << " has " << passOrFail() << "." << endl;
    }
};
