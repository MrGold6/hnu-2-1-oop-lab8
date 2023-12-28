#include "Voucher.h"

Voucher::Voucher() : country(""), city(""), date(""), cost(0), code(0), transport("") {}


Voucher::Voucher(std::string country, std::string city, std::string date, int cost, int code, std::string transport) {
    this->country = country;
    this->city = city;
    this->date = date;
    this->cost = cost;
    this->code = code;
    this->transport = transport;
}

Voucher::Voucher(std::string country, std::string city, int date) {
    this->country = country;
    this->city = city;
    this->date = date;
}

Voucher::~Voucher() {
  
    std::cout << ">>>Go out from Voucher: " << country << std::endl;

}


//getters
std::string Voucher::getCountry() {
    return country;
}

std::string Voucher::getCity() {
    return city;
}

std::string Voucher::getDate() {
    return date;
}

int Voucher::getCost() {
    return cost;
}

int Voucher::getCode() {
    return code;
}

std::string Voucher::getTransport() {
    return transport;
}

//setters
void Voucher::setCountry(std::string country) {
    this->country = country;
}

void Voucher::setCity(std::string city) {
    this->city = city;
}

void Voucher::setDate(std::string date) {
    this->date = date;
}

void Voucher::setCost(int cost) {
    this->cost = cost;
}

void Voucher::setCode(int code) {
    this->code = code;
}

void Voucher::setTransport(std::string transport) {
    this->transport = transport;
}
