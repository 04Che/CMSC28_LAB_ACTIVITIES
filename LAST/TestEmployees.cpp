#include <iostream>
#include "Employees.h"

int main() {

    // Header design
    std::cout << "=========================================" << std::endl;
    std::cout << "Program: Employee Information System" << std::endl;
    std::cout << "Subject: CMSC 28" << std::endl;
    std::cout << "Programmed by: CHELLO G. SERION" << std::endl;
    std::cout << "=========================================" << std::endl << std::endl;


    Employees e;
    std::string User_input;
    float E_salary;

    std::cout << "Enter Employee First Name: ";
    std::getline(std::cin, User_input);
    e.setFname(User_input);

    std::cout << "Enter Employee Last Name: ";
    std::getline(std::cin, User_input);
    e.setLname(User_input);

    std::cout << "Enter Employee Gender: ";
    std::getline(std::cin, User_input);
    e.setGender(User_input);

    std::cout << "Enter Employee Email: ";
    std::getline(std::cin, User_input);
    e.setEmailAdd(User_input);

    std::cout << "Enter Employee Contact Number: ";
    std::getline(std::cin, User_input);
    e.setCpNumber(User_input);

    std::cout << "Enter Employee Number: ";
    std::getline(std::cin, User_input);
    e.setEmpNum(User_input);

    std::cout << "Enter Position: ";
    std::getline(std::cin, User_input);
    e.setPosition(User_input);

    std::cout << "Enter Office/Unit: ";
    std::getline(std::cin, User_input);
    e.setOfficeUnit(User_input);

    std::cout << "Enter Salary: ";
    std::cin >> E_salary;
    e.setSalary(E_salary);
    
    // Corrected and custom output
    std::cout << "\nGood Day " << e.getFname() << " " << e.getLname() << ", we are pleased to inform you that you are hired. "
              << "We would like you to be part of our UP Family. Your employee number is " << e.getEmpNum() 
              << ", and you hold the position of " << e.getPosition() << " in the " << e.getOfficeUnit() 
              << " unit with a salary of " << e.getSalary() << "." << std::endl;
    

    return 0;
}
