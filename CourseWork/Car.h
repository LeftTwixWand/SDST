#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car :
    public Vehicle
{
protected:

	double _maxSpeed;
	double _price;

public:

	double GetMaxSpeed();
	double GetPrice();

	void DisplayInformation() override;

	Car(std::string brand, int yearOfProduction, double maxSpeed, double _price);
};

#endif // !CAR_H