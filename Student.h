#include "Human.h"
#include "Voucher.h"

class Student : public Human
{
private:
    std::string date_of_admission;
    bool isGraduated;
    std::string atestat;
    int number_of_record_book;
    std::string document;
    Voucher* voucher;
public:
    std::string group;
    std::string speciality;
    int course;

    Student();
    Student(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age, std::string email,
        std::string phone_number, std::string address,
        std::string date_of_admission, bool isGraduated, std::string atestat, int number_of_record_book, std::string document,
        std::string group, std::string speciality, int course);
    void Copy(Student t);
    Student getCopy();
    ~Student();

    //getters
    std::string getDate_of_admission();
    bool getIsGraduated();
    std::string getAtestat();
    int getNumber_of_record_book();
    std::string getDocument();
    std::string getGroup();
    std::string getSpeciality();
    int getCourse();
    Voucher* getVoucher();

    //setters
    void setDate_of_admission(std::string date_of_admission);
    void setIsGraduated(bool isGraduated);
    void setAtestat(std::string atestat);
    void setNumber_of_record_book(int number_of_record_book);
    void setDocument(std::string document);
    void setGroup(std::string group);
    void setSpeciality(std::string speciality);
    void setCourse(int course);
    void setVoucher(Voucher* voucher);

    void writeToFile();
    void writeToFile(std::string fileName);
    Student readFromFile();
    Student readFromFile(std::string fileName);

    using Human::getRNTRC;
    using Human::setRNTRC;

};

