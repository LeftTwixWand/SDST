#include <iostream>
#include "Car.h"

double Car::GetMaxSpeed()
{
    return _maxSpeed;
}

double Car::GetPrice()
{
    return _price;
}

void Car::DisplayInformation()
{
    Vehicle::DisplayInformation();
    std::cout << "Price: " << _price << "$" << std::endl;
    std::cout << "Max sped: " << _maxSpeed << std::endl;
}

Car::Car(std::string brand, int yearOfProduction, double maxSpeed, double price) : Vehicle(brand, yearOfProduction)
{
    _maxSpeed = maxSpeed;
    _price = price;
}