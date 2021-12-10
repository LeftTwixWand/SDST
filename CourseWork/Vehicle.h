#pragma once
#ifndef Vehicle_H
#define Vehicle_H

#include<string>

class Vehicle
{
private:

	std::string _brand;
	int _yearOfProduction;

public:

	int GetYearOfProduction();
	std::string GetBrand();

	virtual void DisplayInformation();

	Vehicle(std::string brand, int yearOfProduction);
};

#endif // !Vehicle_H