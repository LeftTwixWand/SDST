#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"

Car* GetTheFastestCar(std::vector<Vehicle*> vehicles)
{
	Car* theFastestCar = nullptr;

	for (Vehicle* vehicle : vehicles)
		if (dynamic_cast<Car*>(vehicle) != nullptr)
		{
			Car* tempCar = dynamic_cast<Car*>(vehicle);
			if (theFastestCar == nullptr)
			{
				theFastestCar = tempCar;
				continue;
			}
			
			theFastestCar = 
				theFastestCar->GetMaxSpeed() > theFastestCar->GetMaxSpeed() 
				? theFastestCar 
				: tempCar;
		}

	return theFastestCar;
}

int main()
{
	std::vector<Vehicle*> vehicles = {
		new Vehicle("Plane", 1903),
		new Vehicle("Bike", 1817),
		new Car("Ford Mustang", 2021, 250, 36000),
		new Car("Tesla Roadster", 2023, 402, 200000),
	};

	for (auto vehicle : vehicles)
	{ 
		vehicle->DisplayInformation();
		std::cout << std::endl;
	}

	Car* theFastestCar = GetTheFastestCar(vehicles);
	std::cout << "The fastest car is: " << theFastestCar->GetBrand() << " with max speef of " << theFastestCar->GetMaxSpeed() << "km/h" << std::endl;
	
	
	for (auto pointer : vehicles)
	{
		delete pointer;
	}
	vehicles.clear();
}