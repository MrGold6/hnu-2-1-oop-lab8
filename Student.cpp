#include "Student.h"
#include <windows.h>

Student::Student() {}

Student::Student(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age, std::string email,
    std::string phone_number, std::string address,
    std::string date_of_admission, bool isGraduated, std::string atestat, int number_of_record_book, std::string document,
    std::string group, std::string speciality, int course)
    :Human(RNTRC, name, surname, lastname, age, email, phone_number, address) {

    this->date_of_admission = date_of_admission;
    this->isGraduated = isGraduated;
    this->atestat = atestat;
    this->number_of_record_book = number_of_record_book;
    this->document = document;
    this->group = group;
    this->speciality = speciality;
    this->course = course;
}

void Student::Copy(Student h) {
    this->setRNTRC(h.getRNTRC());
    this->Human::name = h.Human::name;
    this->Human::surname = h.Human::surname;
    this->Human::lastname = h.Human::lastname;
    this->Human::age = h.Human::age;
    this->Human::email = h.Human::email;
    this->Human::phone_number = h.Human::phone_number;
    this->Human::address = h.Human::address;

    this->date_of_admission = h.date_of_admission;
    this->isGraduated = h.isGraduated;
    this->atestat = h.atestat;
    this->number_of_record_book = h.number_of_record_book;
    this->document = h.document;
    this->group = h.group;
    this->speciality = h.speciality;
    this->course = h.course;
}


Student Student::getCopy() {
    return Student(RNTRC, name, surname, lastname, age, email, phone_number, address, date_of_admission,
        isGraduated, atestat, number_of_record_book, document, group, speciality, course);
}

Student::~Student() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    std::cout << ">>>Go out from Student from course: " << course << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}


//getters
Voucher* Student::getVoucher() {
    return voucher;
}

std::string Student::getDate_of_admission() {
    return date_of_admission;
}

bool Student::getIsGraduated() {
    return isGraduated;
}

std::string Student::getAtestat() {
    return atestat;
}

int Student::getNumber_of_record_book() {
    return number_of_record_book;
}

std::string Student::getDocument() {
    return document;
}

std::string Student::getGroup() {
    return group;
}

std::string Student::getSpeciality() {
    return speciality;
}

int Student::getCourse() {
    return course;
}

//setters
void Student::setVoucher(Voucher* voucher) {
    this->voucher = voucher;
}

void Student::setDate_of_admission(std::string date_of_admission) {
    this->date_of_admission = date_of_admission;
}

void Student::setIsGraduated(bool isGraduated) {
    this->isGraduated = isGraduated;
}

void Student::setAtestat(std::string atestat) {
    this->atestat = atestat;
}

void Student::setNumber_of_record_book(int number_of_record_book) {
    this->number_of_record_book = number_of_record_book;
}

void Student::setDocument(std::string document) {
    this->document = document;
}

void Student::setGroup(std::string group) {
    this->group = group;
}

void Student::setSpeciality(std::string speciality) {
    this->speciality = speciality;
}

void Student::setCourse(int course) {
    this->course = course;
}


void Student::writeToFile() {
    std::ofstream wf("info_Student.txt");
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(Student));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }
}

void Student::writeToFile(std::string fileName) {
    std::ofstream wf(fileName);
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(Student));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }

}

Student Student::readFromFile() {
    std::ifstream rf("info_Student.txt");
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return Student();
    }

    static Student rstu;

    rf.read((char*)&rstu, sizeof(Student));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return Student();
    }

    return rstu;
}

Student Student::readFromFile(std::string fileName) {
    std::ifstream rf(fileName);
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return Student();
    }

    static Student rstu;

    rf.read((char*)&rstu, sizeof(Student));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return Student();
    }

    return rstu;
}