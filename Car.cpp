#include "Car.h"

Taxi::Car::Car(string number, string manufacturer, string aboutDriver, bool isFree) {
    setNumber(number);
    setManufacturer(manufacturer);
    setAboutDriver(aboutDriver);
    setIsFree(isFree);

}

Taxi::Car::Car() : Car("number", "manufacture", "aboutDriver", "isFree") {}

void Taxi::Car::setNumber(string number)
{
    this->number = number;
}

void Taxi::Car::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Taxi::Car::setAboutDriver(string aboutDriver)
{
    this->aboutDriver = aboutDriver;
}

void Taxi::Car::setIsFree(bool isFree)
{
    this->isFree = isFree;
}

std::string Taxi::Car::getNumber() const
{
    return number;
}

std::string Taxi::Car::getManufacturer() const
{
    return manufacturer;
}

std::string Taxi::Car::getAboutDriver() const
{
    return aboutDriver;
}

bool Taxi::Car::IsFree() const
{
    return isFree;
}
