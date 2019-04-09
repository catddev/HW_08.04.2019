#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;

//Разработать класс Airplane(самолет).
//Класс должен содержать : конструктор по умолчанию, конструктор с параметрами,
//при необходимости реализовать деструктор и конструктор копирования.
//Добавить методы для :
//□	проверки готовности к взлету(топливо должно равняться максимуму)
//□	заправки самолета топливом
//□	метод для проверки на максимальную загрузку салона пассажирами
//□	метод для проверки относятся ли самолеты к одному типу
//□	для копирования объектов
//□	 остальные методы на усмотрение разработчика(методы set и get)
//Написать интерфейс для работы с классом.
//Реализовать динамический массив объектов класса с возможностью добавления, удаления объектов из массива.
//Реализовать возможность записи информации об объектах массива в текстовый файл, бинарный файл.

class Airplane {
private:
	char type[20];
	double fuel;
	int passengers;
public:
	Airplane();
	Airplane(const char*type, double fuel, int passengers);

	void setFuel(double fuel);
	void setPassengers(int passengers);
	void setType(const char*type);

	double getFuel();
	int getPassengers();
	const char* getType();

	bool full_tank();
	void add_fuel(double fuel);
	bool full_salon();
	bool operator==(Airplane obj);
	Airplane operator=(const Airplane&obj);
	void print();
};