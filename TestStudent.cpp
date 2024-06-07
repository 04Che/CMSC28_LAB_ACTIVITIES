#include <iostream>
#include "Student.h"

int main() {
    // Header design
    std::cout << "=========================================" << std::endl;
    std::cout << "Program: Student Information System" << std::endl;
    std::cout << "Subject: CMSC 28" << std::endl;
    std::cout << "Programmed by: CHELLO G. SERION" << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;

    Student s;
    std::string User_input;

    std::cout << "Enter Student First Name: ";
    std::getline(std::cin, User_input);
    s.setFname(User_input);

    std::cout << "Enter Student Last Name: ";
    std::getline(std::cin, User_input);
    s.setLname(User_input);

    std::cout << "Enter Student Gender: ";
    std::getline(std::cin, User_input);
    s.setGender(User_input);

    std::cout << "Enter Student Email: ";
    std::getline(std::cin, User_input);
    s.setEmailAdd(User_input);

    std::cout << "Enter Student Contact Number: ";
    std::getline(std::cin, User_input);
    s.setCpNumber(User_input);

    std::cout << "Enter Student Number: ";
    std::getline(std::cin, User_input);
    s.setStudentNum(User_input);

    std::cout << "Enter Course: ";
    std::getline(std::cin, User_input);
    s.setCourse(User_input);

    std::cout << "Enter Department: ";
    std::getline(std::cin, User_input);
    s.setDepartment(User_input);

    std::cout << "Enter College: ";
    std::getline(std::cin, User_input);
    s.setCollege(User_input);

    // Custom output
    std::cout << "\nHi, " << s.getFname() << " " << s.getLname() << "! Welcome to UP Mindanao and congratulations! "
              << "We are pleased to inform you that you are admitted in the " << s.getCourse() 
              << " program under the Department of " << s.getDepartment() 
              << ", College of " << s.getCollege() 
              << ". Your Student number is " << s.getStudentNum() << "." << std::endl;

    return 0;
}
