#include <vector>

#include "Student.h"

class TradeUnion {
private:
    Student head;
    std::vector<Voucher*> vouchers;
    std::vector<Student*> students;
    std::string document;
    bool isApproved;

public:
    std::string name;
    int count;
    std::string dateOfCreation;


    TradeUnion();
    TradeUnion(std::string name, int count, std::string dateOfCreation, Student head, bool isApproved);
    TradeUnion(std::string name, int count, std::string dateOfCreation, Student head, std::vector<Voucher*> vouchers,
        std::vector<Student*> students, std::string document, bool isApproved);

    void Copy(TradeUnion t);
    TradeUnion getCopy();
    ~TradeUnion();

    //getters
    std::string getName();
    int getCount();
    bool getIsApproved();
    std::string getDateOfCreation();
    std::string getDocument();
    std::vector<Voucher*> getVouchers();
    Student getHead();
    std::vector<Student*> getStudents();

    //setters
    void setName(std::string name);
    void setCount(int count);
    void setDateOfCreation(std::string dateOfCreation);
    void setIsApproved(bool isApproved);
    void setDocument(std::string document);
    void setHead(Student head);
    void setStudents(const std::vector<Student*> students);
    void setVouchers(const std::vector<Voucher*> vouchers);
    void giveVoucher(Student* student, Voucher* voucher);



    void writeToFile();
    void writeToFile(const char* fileName);
    TradeUnion RD();
    TradeUnion RD(const char* fileName);

};


