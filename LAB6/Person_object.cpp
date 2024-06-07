#include <iostream>
#include "Person.h"
#include "Grade.h"
using namespace std;

int main() {
    int age;
    char gender;
    string subject;
    float grade;
    // ACTIVITY 2 18
    // Input Details
    cout << "Input age: ";
    cin >> age;

    cout << "Input gender (M/F): ";
    cin >> gender;

    // Person object
    Person p;
    p.setAge(age);
    p.setGender(gender);

    // Grade details
    cout << "Input subject: ";
    cin.ignore(); 
    getline(cin, subject);

    cout << "Input grade: ";
    cin >> grade;

    // Check Grade
    if (grade < 0) {
        cout << "Invalid grade! Program will terminate." << endl;
        return 1; 
    }

    // Grade object
    Grade g(subject, grade);

    // Display details
    cout << "\nPerson Details:\n";
    p.view();

    cout << "\nGrade Details:\n";
    g.displayGrade();

    return 0;
}
