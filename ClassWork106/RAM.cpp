#include "RAM.h" // файл реализации
#include "Laptop.h"
#include <iostream>

using namespace std;


RAM::RAM(const char* mod) // ATI
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

RAM::RAM(const char* mod, double pr) :RAM(mod) // делегирование
{
	price = pr;
	Laptop::incrementCount();
}

RAM::~RAM()
{
	delete[]model;
	price = 0;
}

RAM::RAM(const RAM& b) // copy constructor
{
	this->model = new char[strlen(b.model) + 1];
	strcpy_s(this->model, strlen(b.model) + 1, b.model);

	price = b.price;

	cout << "RAM Copy constructor\n";
}

void RAM::SetModel(const char* mod)
{
	if (this->model != nullptr)
	{
		delete[] model; // Удаление предыдущей строки!
	}
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
}

void RAM::SetPrice(double pr)
{
	if (pr > 1000)
	{
		price = pr;
	}
}

const char* RAM::GetModel() const
{
	return model;
}

double RAM::GetPrice() const
{
	return price;
}

void RAM::Print() const
{
	cout << "RAM Model - " << model << "\t	Prise - " << price << endl;
}
