#include <iostream>
using namespace std;

// ACTIVITY 2
class Person {
private:
    int age;
    char gender;

public:
    Person() : age(0), gender('M') {}

    Person(int newage) : age(newage), gender('M') {}

    Person(int newage, char c) : age(newage), gender(c) {}

    void setAge(int newage) {
        if (newage >= 0) {
            age = newage;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    int getAge() const {
        return age;
    }

    void setGender(char c) {
        if ((c == 'M') || (c == 'F')) {
            gender = c;
        } else {
            cout << "Invalid gender!" << endl;
        }
    }

    char getGender() const {
        return gender;
    }

    void view() const {
        cout << "Person's age: " << getAge() << endl;
        cout << "Person's gender: " << getGender() << endl;
    }
};
