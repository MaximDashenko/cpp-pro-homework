#include <iostream>
#include <string>
#include <utility>

class Student {
private:
    std::string name;
    std::string dateOfBirth;
    std::string phoneNumber;
    std::string address;
    std::string groupNumber;

public:
    Student(std::string name, std::string dateOfBirth, std::string phoneNumber,
            std::string address, std::string groupNumber)
            : name(std::move(name)), dateOfBirth(std::move(dateOfBirth)), phoneNumber(std::move(phoneNumber)),
              address(std::move(address)), groupNumber(std::move(groupNumber)) {}

    void enterData() {
        std::cout << "Enter name: ";
        std::getline(std::cin >> std::ws, name);

        std::cout << "Enter date of birth: ";
        std::getline(std::cin >> std::ws, dateOfBirth);

        std::cout << "Enter phone number: ";
        std::getline(std::cin >> std::ws, phoneNumber);

        std::cout << "Enter address: ";
        std::getline(std::cin >> std::ws, address);

        std::cout << "Enter group number: ";
        std::getline(std::cin >> std::ws, groupNumber);
    }

    void displayData() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Date of Birth: " << dateOfBirth << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "Group Number: " << groupNumber << std::endl;
    }

    void editData() {
        std::cout << "Select a field to edit:" << std::endl;
        std::cout << "1. Name" << std::endl;
        std::cout << "2. Date of Birth" << std::endl;
        std::cout << "3. Phone Number" << std::endl;
        std::cout << "4. Address" << std::endl;
        std::cout << "5. Group Number" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter new name: ";
                std::getline(std::cin >> std::ws, name);
                break;
            case 2:
                std::cout << "Enter new date of birth: ";
                std::getline(std::cin >> std::ws, dateOfBirth);
                break;
            case 3:
                std::cout << "Enter new phone number: ";
                std::getline(std::cin >> std::ws, phoneNumber);
                break;
            case 4:
                std::cout << "Enter new address: ";
                std::getline(std::cin >> std::ws, address);
                break;
            case 5:
                std::cout << "Enter new group number: ";
                std::getline(std::cin >> std::ws, groupNumber);
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    }
};

int main() {
    Student student("Student Name", "01.01.2000", "123456789", "Student Address", "Group 1");

    student.enterData();

    std::cout << std::endl;

    student.displayData();

    std::cout << std::endl;

    student.editData();

    std::cout << std::endl;

    student.displayData();

    return 0;
}
