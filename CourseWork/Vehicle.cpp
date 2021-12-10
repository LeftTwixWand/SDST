#include <iostream>
#include "Vehicle.h"

int Vehicle::GetYearOfProduction()
{
    return _yearOfProduction;
}

std::string Vehicle::GetBrand()
{
    return _brand;
}

void Vehicle::DisplayInformation()
{
    std::cout << "The vehicle's brand: " << _brand << std::endl;
    std::cout << "Year of production: " << _yearOfProduction << std::endl;
}

Vehicle::Vehicle(std::string brand, int yearOfProduction)
{
    _brand = brand;
    _yearOfProduction = yearOfProduction;
}