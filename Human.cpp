#include "Human.h"
#include <windows.h>

Human::Human() : RNTRC(""), name(""), surname(""), lastname(""), age(0), email(""), phone_number(""), address("") {}


Human::Human(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age,
    std::string email, std::string phone_number, std::string address) {
    this->RNTRC = RNTRC;
    this->name = name;
    this->surname = surname;
    this->lastname = lastname;
    this->age = age;
    this->email = email;
    this->phone_number = phone_number;
    this->address = address;
}

Human::Human(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age, std::string address) {
    this->RNTRC = RNTRC;
    this->name = name;
    this->surname = surname;
    this->lastname = lastname;
    this->age = age;
    this->address = address;
}

void Human::Copy(Human h) {
    this->RNTRC = h.RNTRC;
    this->name = h.name;
    this->surname = h.surname;
    this->lastname = h.lastname;
    this->age = h.age;
    this->email = h.email;
    this->phone_number = h.phone_number;
    this->address = h.address;
}

Human Human::getCopy() {
    return Human(RNTRC, name, surname, lastname, age, email, phone_number, address);
}

Human::~Human() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    std::cout << ">>>Go out from Human: " << surname << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


//getters
std::string Human::getRNTRC() {
    return RNTRC;
}

std::string Human::getName() {
    return name;
}

std::string Human::getSurname() {
    return surname;
}

std::string Human::getLastname() {
    return lastname;
}

int Human::getAge() {
    return age;
}

std::string Human::getEmail() {
    return email;
}

std::string Human::getPhone_number() {
    return phone_number;
}

std::string Human::getAddress() {
    return address;
}

//setters
void Human::setRNTRC(std::string RNTRC) {
    this->RNTRC = RNTRC;
}

void Human::setName(std::string name) {
    this->name = name;
}

void Human::setSurname(std::string surname) {
    this->surname = surname;
}

void Human::setLastname(std::string lastname) {
    this->lastname = lastname;
}

void Human::setAge(int age) {
    this->age = age;
}

void Human::setEmail(std::string email) {
    this->email = email;
}

void Human::setPhone_number(std::string phone_number) {
    this->phone_number = phone_number;
}

void Human::setAddress(std::string address) {
    this->address = address;
}

void Human::writeToFile() {
    std::ofstream wf("info_Human.txt");
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(Human));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }
}

void Human::writeToFile(std::string fileName) {
    std::ofstream wf(fileName);
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(Human));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }

}

Human Human::readFromFile() {
    std::ifstream rf("info_Human.txt");
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return Human();
    }

    static Human rstu;

    rf.read((char*)&rstu, sizeof(Human));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return Human();
    }

    return rstu;
}

Human Human::readFromFile(std::string fileName) {
    std::ifstream rf(fileName);
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return Human();
    }

    static Human rstu;

    rf.read((char*)&rstu, sizeof(Human));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return Human();
    }

    return rstu;
}