#include "TaxiManager.h"

void Taxi::TaxiManager::TaxiEnd(string number)
{
	cout << "end taxi " << number << endl;

	for (Car& x : l_car) {
		if (x.getNumber() == number) {
			x.setIsFree(true);
		}
	}

}

Taxi::TaxiManager::TaxiManager() {}


void Taxi::TaxiManager::outputCars()
{
	for (Car x : l_car) {
		cout << "Number: " << x.getNumber() << endl;
		cout << "Driver: " << x.getAboutDriver() << endl;
		cout << "Manufacturer: " << x.getManufacturer() << endl;
		cout << "Is free: " << x.IsFree() << endl;
	}
}

void Taxi::TaxiManager::pushToStart(Car car)
{
	l_car.push_front(car);
}


void Taxi::TaxiManager::getTaxi(string number)
{
	for (Car x : l_car) {
		if (x.getNumber() == number) {
			cout << "Number: " << x.getNumber() << endl;
			cout << "Driver: " << x.getAboutDriver() << endl;
			cout << "Manufacturer: " << x.getManufacturer() << endl;
			cout << "Is free: " << x.IsFree() << endl;
		}
	}
}

void Taxi::TaxiManager::taxiGo(string number, string street)
{
	cout << "go taxi " << number << " to " << street << endl;

	for (Car& x : l_car) {
		if (x.getNumber() == number) {
			x.setIsFree(false);
		}
	}

	// taxi end 

	TaxiEnd(number);
}


