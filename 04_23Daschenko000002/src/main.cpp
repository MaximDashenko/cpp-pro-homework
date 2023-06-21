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
            : name(std::move(name)), dateOfBirth(std::move(dateOfBirth)), phoneNumber(std::move(phoneNumber)), address(std::move(address)),
              groupNumber(std::move(groupNumber)) {}


    void enterData() {
        std::cout << "Введіть ім'я: ";
        std::getline(std::cin >> std::ws, name);

        std::cout << "Введіть дату народження: ";
        std::getline(std::cin >> std::ws, dateOfBirth);

        std::cout << "Введіть номер телефону: ";
        std::getline(std::cin >> std::ws, phoneNumber);

        std::cout << "Введіть адресу: ";
        std::getline(std::cin >> std::ws, address);

        std::cout << "Введіть номер навчальної групи: ";
        std::getline(std::cin >> std::ws, groupNumber);
    }


    void displayData() const {
        std::cout << "Ім'я: " << name << std::endl;
        std::cout << "Дата народження: " << dateOfBirth << std::endl;
        std::cout << "Номер телефону: " << phoneNumber << std::endl;
        std::cout << "Адреса: " << address << std::endl;
        std::cout << "Номер навчальної групи: " << groupNumber << std::endl;
    }

    void editData() {
        std::cout << "Виберіть поле для редагування:" << std::endl;
        std::cout << "1. Ім'я" << std::endl;
        std::cout << "2. Дата народження" << std::endl;
        std::cout << "3. Номер телефону" << std::endl;
        std::cout << "4. Адреса" << std::endl;
        std::cout << "5. Номер навчальної групи" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Введіть нове ім'я: ";
                std::getline(std::cin >> std::ws, name);
                break;
            case 2:
                std::cout << "Введіть нову дату народження: ";
                std::getline(std::cin >> std::ws, dateOfBirth);
                break;
            case 3:
                std::cout << "Введіть новий номер телефону: ";
                std::getline(std::cin >> std::ws, phoneNumber);
                break;
            case 4:
                std::cout << "Введіть нову адресу: ";
                std::getline(std::cin >> std::ws, address);
                break;
            case 5:
                std::cout << "Введіть новий номер навчальної групи: ";
                std::getline(std::cin >> std::ws, groupNumber);
                break;
            default:
                std::cout << "Неправильний вибір!" << std::endl;
        }
    }
};

int main() {
    Student student("Ім'я студента", "01.01.2000", "123456789", "Адреса студента", "Група 1");


    student.enterData();

    std::cout << std::endl;


    student.displayData();

    std::cout << std::endl;


    student.editData();

    std::cout << std::endl;


    student.displayData();

    return 0;
}
