#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

//1. Для визначеної раніше ієрархії класів додати абстрактного клас та кілька обґрунтованих (не менше трьох) похідних класів.
class Voucher {

private:
    int code;
    std::string transport;
    std::string city;

public:
    std::string country;
    std::string date;
    int cost;


    Voucher();
    Voucher(std::string country, std::string city, std::string date, int cost, int code, std::string transport);
    Voucher(std::string country, std::string city, int date);
    //3. На базі кожного похідного класу визначити віртуальні деструктори та продемонструвати відмінність їх роботи від невіртуальних деструкторів.
    ~Voucher();

    //getters
    std::string getCountry();
    std::string getCity();
    std::string getDate();
    int getCost();
    int getCode();
    std::string getTransport();

    //setters
    void setCountry(std::string country);
    void setCity(std::string city);
    void setDate(std::string date);
    void setCost(int cost);
    void setCode(int code);
    void setTransport(std::string transport);

};






//1. Для визначеної раніше ієрархії класів додати абстрактного клас та кілька обґрунтованих (не менше трьох) похідних класів.
class PlusVoucher : public Voucher
{
private:
    int number_of_compartment;
    std::string insuranse;
    std::string all_Included;

public:
    void writeToFile();
    void writeToFile(std::string fileName);
    PlusVoucher readFromFile();
    PlusVoucher readFromFile(std::string fileName);

    PlusVoucher();
    PlusVoucher(std::string country, std::string city, std::string date, int cost, int code, std::string transport,
        int number_of_compartment, std::string insuranse, std::string all_Included);
    void Copy(PlusVoucher v);
    PlusVoucher getCopy();

    //getters
    int getNumber_of_compartment();
    std::string getInsuranse();
    std::string getAll_Included();

    //setters
    void setNumber_of_compartment(int number_of_compartment);
    void setInsuranse(std::string insuranse);
    void setAll_Included(std::string all_Included);


    //3. На базі кожного похідного класу визначити віртуальні деструктори та продемонструвати відмінність їх роботи від невіртуальних деструкторів.
    ~PlusVoucher() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        std::cout << ">>>Go out from PlusVoucher" << std::endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    }

};




//1. Для визначеної раніше ієрархії класів додати абстрактного клас та кілька обґрунтованих (не менше трьох) похідних класів.
class NormalVoucher : public Voucher
{
private:
    int number_of_seat;
    std::string insuranse;
    std::string breakfast_Included;

public:
    void writeToFile();
    void writeToFile(std::string fileName);
    NormalVoucher readFromFile();
    NormalVoucher readFromFile(std::string fileName);

    NormalVoucher();
    NormalVoucher(std::string country, std::string city, std::string date, int cost, int code, std::string transport,
        int number_of_seat, std::string insuranse, std::string breakfast_Included);
    void Copy(NormalVoucher v);
    NormalVoucher getCopy();

    //getters
    int getNumber_of_seat();
    std::string getInsuranse();
    std::string getBreakfast_Included();

    //setters
    void setNumber_of_seat(int number_of_seat);
    void setInsuranse(std::string insuranse);
    void setBreakfast_Included(std::string breakfast_Included);

    //3. На базі кожного похідного класу визначити віртуальні деструктори та продемонструвати відмінність їх роботи від невіртуальних деструкторів.
    ~NormalVoucher() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        std::cout << ">>>Go out from NormalVoucher" << std::endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    }

};


//1. Для визначеної раніше ієрархії класів додати абстрактного клас та кілька обґрунтованих (не менше трьох) похідних класів.
class CutVoucher : public Voucher
{
private:
    bool hasAdditionalStaff;
    std::string wifi_password;

public:
    void writeToFile();
    void writeToFile(std::string fileName);
    CutVoucher readFromFile();
    CutVoucher readFromFile(std::string fileName);

    CutVoucher();
    CutVoucher(std::string country, std::string city, std::string date, int cost, int code, std::string transport,
        std::string wifi_password, bool hasAdditionalStaff);
    void Copy(CutVoucher v);
    CutVoucher getCopy();

    //getters
    bool getHasAdditionalStaff();
    std::string getWifi_password();

    //setters
    void setHasAdditionalStaff(bool hasAdditionalStaff);
    void setWifi_password(std::string wifi_password);


    //3. На базі кожного похідного класу визначити віртуальні деструктори та продемонструвати відмінність їх роботи від невіртуальних деструкторів.
    ~CutVoucher() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        std::cout << ">>>Go out from CutVoucher" << std::endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    }


};






