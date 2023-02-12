#pragma once
#include <string>

namespace Taxi {
	using std::string;

	class Car {
		string number;
		string manufacturer;
		string aboutDriver;
		bool isFree;

	public:
		Car(string number, string manufacturer, string aboutDriver, bool isFree);
		Car();

		void setNumber(string number);
		void setManufacturer(string manufacturer);
		void setAboutDriver(string aboutDriver);
		void setIsFree(bool isFree);

		string getNumber() const;
		string getManufacturer() const;
		string getAboutDriver() const;
		bool IsFree() const;
	};

}

