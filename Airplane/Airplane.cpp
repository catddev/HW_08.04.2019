#include "Airplane.h"

Airplane::Airplane()
{
	strcpy_s(type, "");
	fuel = 0;
	passengers = 0;
}

Airplane::Airplane(const char*type, double fuel, int passengers)
{
	this->fuel = fuel;
	this->passengers = passengers;
	strcpy_s(this->type, type);
}

void Airplane::setFuel(double fuel)
{
	this->fuel = fuel;
}

void Airplane::setPassengers(int passengers)
{
	this->passengers = passengers;
}

void Airplane::setType(const char * type)
{
	strcpy_s(this->type, type);
}

double Airplane::getFuel()
{
	return fuel;
}

int Airplane::getPassengers()
{
	return passengers;
}

const char * Airplane::getType()
{
	return type;
}

bool Airplane::full_tank()
{
	double max_fuel = 1000;
	if (fuel == max_fuel) {
		cout << "Full tank! Ready to take off!" << endl;
		return true;
	}
	else if (fuel < max_fuel) {
		cout << "Fuel is not enough" << endl;
		return false;
	}
}

void Airplane::add_fuel(double fuel)
{
	this->fuel += fuel;
}

bool Airplane::full_salon()
{
	int max_pass = 200;
	if (passengers <= max_pass) {
		cout << "salon's ready!" << endl;
		return true;
	}
	else {
		cout << "Too many passengers on board" << endl;
		return false;
	}
}

bool Airplane::operator==(Airplane obj)
{
	return (strcmp(this->type, obj.type) == 0);
}

Airplane Airplane::operator=(const Airplane & obj)
{
	this->fuel = obj.fuel;
	this->passengers = obj.passengers;
	strcpy_s(this->type, obj.type);

	return *this;
}

void Airplane::print()
{
	cout << type << ": " << fuel << "l; " << passengers << " passengers on board" << endl;
}
