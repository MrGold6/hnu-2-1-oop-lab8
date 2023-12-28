#include <iostream>
#include <string>
#include <fstream>


class Human
{
protected:
    std::string RNTRC;
    std::string name;
    std::string surname;
    std::string lastname;
    int age;
public:
    std::string email;
    std::string phone_number;
    std::string address;

    Human();
    Human(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age, std::string address);
    Human(std::string RNTRC, std::string name, std::string surname, std::string lastname, int age, std::string email, std::string phone_number, std::string address);
    void Copy(Human t);
    Human getCopy();
    ~Human();

    //getters
    std::string getRNTRC();
    std::string getName();
    std::string getSurname();
    std::string getLastname();
    int getAge();
    std::string getEmail();
    std::string getPhone_number();
    std::string getAddress();

    //setters
    void setRNTRC(std::string RNTRC);
    void setName(std::string name);
    void setSurname(std::string surname);
    void setLastname(std::string lastname);
    void setAge(int age);
    void setEmail(std::string email);
    void setPhone_number(std::string phone_number);
    void setAddress(std::string address);

    void writeToFile();
    void writeToFile(std::string fileName);
    Human readFromFile();
    Human readFromFile(std::string fileName);
};

