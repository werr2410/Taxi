#pragma once
#include "Car.h"
#include <iostream>
#include <list>

namespace Taxi {
	using std::cout;
	using std::endl;
	using std::list;

	class TaxiManager {
		list<Car> l_car;
		
		void TaxiEnd(string number);
	public:
		TaxiManager();

		void outputCars();
		void pushToStart(Car car);
		void getTaxi(string number);

		void taxiGo(string number, string street);

	};

}

