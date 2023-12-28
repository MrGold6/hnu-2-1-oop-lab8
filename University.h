#include "TradeUnion.h"

class University
{
private:
    Human rector;
    std::vector<Student*> students;
    int count;
    bool isCertified;
    std::string phone_number;

public:
    std::string name;
    static std::string dateOfCreation;
    TradeUnion tradeUnion = TradeUnion();


    University();
    University(std::string name, int count, Human rector);
    University(std::string name, int count, std::string phone_number, bool isCertified,
        Human rector, std::vector<Student*> students,
        std::string t_name, int t_count, std::string t_dateOfCreation, Student head, bool t_isApproved,
        std::vector<Student*> t_students, std::vector<Voucher*> t_vouchers, std::string t_document);
    void Copy(University t);
    University getCopy();
    ~University();

    //getters
    std::string getName();
    int getCount();
    bool getIsCertified();
    std::string getPhone_number();
    Human getRector();
    std::vector<Student*> getStudents();

    //setters
    void setName(std::string name);
    void setCount(int count);
    void setIsCertified(bool isCertified);
    void setPhone_number(int phone_number);
    void setRector(Human rector);
    void setStudents(std::vector<Student*> students);

    void writeToFile();
    void writeToFile(const char* fileName);
    University RD();
    University RD(const char* fileName);

    static void greeting() {
        std::cout << "Welcome to University. University was created at " << dateOfCreation << std::endl;
    }

};

//2. Реалізувати віртуальне наслідування.
//the problem of diamant
class X : public virtual Voucher
{
public:
    X();
    ~X();
};


class Y : public virtual X
{
public:
    Y();
    ~Y();
};

class Z : public virtual X
{
public:
    Z();
    ~Z();
    static void zavd9();
};


class XYZ : public Y, public Z
{
public:
    XYZ();
    ~XYZ();

};
