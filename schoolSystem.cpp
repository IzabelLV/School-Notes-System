#include "schoolSystem.h"



void schoolSystem::mainScreen()
{
    std::cout << "School System\n\n";
    std::cout << "[1] Add a student\n";
    std::cout << "[2] Add notes\n";
    std::cout << "[3] Search student\n";
    std::cout << "[4] Read kardex\n";
    std::cout << "[5] Print kardex\n";
    std::cout << "[6] Exit\n";

    std::cout << "Please enter your option > ";
}


void schoolSystem::addStudent()
{
    std::string temp;
    std::string fileName;
    std::vector<std::string> data;

    std::cout << "Enter student first name > ";
    std::cin >> temp;
    data.push_back(temp);

    std::cout << "Enter student last name > ";
    std::cin >> temp;
    data.push_back(temp);

    std::cout << "Enter phone number > ";
    std::cin >> temp;
    data.push_back(temp);

    std::cout << "Enter student school ID > ";
    std::cin >> temp;
    data.push_back(temp);

    fileName = data[3] + ".dat";
    std::ofstream file;

    file.open(fileName.c_str());
    file << "Student name: " << data[0] << '\n' << "Last name: " << data[1] << '\n' << "Phone number: " << data[2] << '\n' << "System ID: " << data[3] << std::endl;
    file.close();

}