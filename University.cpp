#include "University.h"
#include <windows.h>

std::string University::dateOfCreation = "19.11.2021";
University::University() :name(""), count(0), phone_number(""), isCertified(true), rector(Human()) {}

University::University(std::string name, int count, Human rector) {
    this->name = name;
    this->count = count;
    this->rector = rector;
}

University::University(std::string name, int count, std::string phone_number, bool isCertified,
    Human rector, std::vector<Student*> students,
    std::string t_name, int t_count, std::string t_dateOfCreation, Student head, bool t_isApproved,
    std::vector<Student*> t_students, std::vector<Voucher*> t_vouchers, std::string t_document) {
    this->name = name;
    this->count = count;
    this->phone_number = phone_number;
    this->isCertified = isCertified;
    this->rector = rector;
    this->students = students;

    this->tradeUnion.name = t_name;
    this->tradeUnion.count = t_count;
    this->tradeUnion.setHead(head);
    this->tradeUnion.setDateOfCreation(t_dateOfCreation);
    this->tradeUnion.setIsApproved(t_isApproved);
    this->tradeUnion.setDocument(t_document);
    this->tradeUnion.setStudents(t_students);
    this->tradeUnion.setVouchers(t_vouchers);
}

void University::Copy(University u) {
    this->name = u.name;
    this->count = u.count;
    this->phone_number = u.phone_number;
    this->isCertified = u.isCertified;
    this->rector = u.rector;
    this->students = u.students;

    this->tradeUnion.name = u.tradeUnion.name;
    this->tradeUnion.count = u.tradeUnion.count;
    this->tradeUnion.setHead(u.tradeUnion.getHead());
    this->tradeUnion.setDateOfCreation(u.tradeUnion.dateOfCreation);
    this->tradeUnion.setIsApproved(u.tradeUnion.getIsApproved());
    this->tradeUnion.setDocument(u.tradeUnion.getDocument());
    this->tradeUnion.setStudents(u.tradeUnion.getStudents());
    this->tradeUnion.setVouchers(u.tradeUnion.getVouchers());
}


University University::getCopy() {
    return University(name, count, phone_number, isCertified,
        rector, students, tradeUnion.name, tradeUnion.count, tradeUnion.dateOfCreation, tradeUnion.getHead(),
        tradeUnion.getIsApproved(), tradeUnion.getStudents(), tradeUnion.getVouchers(),
        tradeUnion.getDocument());
}

University::~University() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    std::cout << ">>>Go out from University: " << name << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}




//getters
std::string University::getName() {
    return name;
}

int University::getCount() {
    return count;
}

bool University::getIsCertified() {
    return isCertified;
}

std::string University::getPhone_number() {
    return phone_number;
}

Human University::getRector() {
    return rector;
}

std::vector<Student*> University::getStudents() {
    return students;
}


//setters
void University::setName(std::string name) {
    this->name = name;
}

void University::setCount(int count) {
    this->count = count;
}


void University::setIsCertified(bool isCertified) {
    this->isCertified = isCertified;
}

void University::setPhone_number(int phone_number) {
    this->phone_number = phone_number;
}

void University::setRector(Human rector) {
    this->rector = rector;
}

void University::setStudents(std::vector<Student*> students) {
    this->students = students;
}

void University::writeToFile() {
    std::ofstream wf("info_University.txt");
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(University));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }
}

void University::writeToFile(const char* fileName) {
    std::ofstream wf(fileName);
    if (!wf) {
        std::cout << "Cannot open file!" << std::endl;
        return;
    }
    wf.write((char*)this, sizeof(University));
    wf.close();
    if (!wf.good()) {
        std::cout << "Error occurred at writing time!" << std::endl;
        return;
    }

}

University University::RD() {
    std::ifstream rf("info_University.txt");
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return University();
    }

    static University rstu;

    rf.read((char*)&rstu, sizeof(University));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return University();
    }

    return rstu;
}

University University::RD(const char* fileName) {
    std::ifstream rf(fileName);
    if (!rf) {
        std::cout << "Cannot open file!" << std::endl;
        return University();
    }

    static University rstu;

    rf.read((char*)&rstu, sizeof(University));
    rf.close();
    if (!rf.good()) {
        std::cout << "Error occurred at reading time!" << std::endl;
        return University();
    }

    return rstu;
}
