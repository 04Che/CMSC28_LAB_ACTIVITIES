#include <iostream>
#include "persono.h" 
#include "GRADEE.h"

using namespace std;

int main() {
    int a;
    char g;
    int age;
    char gender;
    string subject;
    float grade;
    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;

    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);

    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;

    cout << "\n==========================" << endl;
    cout << "Creating the 3rd Person object (c) using the 3rd Constructor" << endl;
    Person c(25, 'F');
    cout << "Age = " << c.getage() << endl;
    cout << "Gender = " << c.getgender() << endl;
    c.view(c.getage(), c.getgender());

     // Grade details
    cout << "Input subject: ";
    cin.ignore(); 
    getline(cin, subject);

    cout << "Input grade: ";
    cin >> grade;

    // Grade object
    Grade g(subject, grade);
    cout << "\nGrade Details:\n";
    g.displayGrade();

    return 0;
}
