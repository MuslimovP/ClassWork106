#include "Laptop.h"
#include <iostream>

using namespace std; 
int Laptop::s_createdObjects = 0;  


Laptop::Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA vg):hdd(hd), ram(rm), cpu(cp), vga(vg)
{
	this->model = new char[strlen(mod) + 1];
	strcpy_s(this->model, strlen(mod) + 1, mod);
	price = hdd.GetPrice() + ram.GetPrice() + cpu.GetPrice() + vga.GetPrice();        

	Laptop::incrementCount(); 
}

Laptop::~Laptop()
{
	delete[] model;
}

double Laptop::GetPrise() const
{
	return price;
}

void Laptop::Print() const
{
	this->hdd.Print();
	this->ram.Print();
	this->cpu.Print();
	this->vga.Print();
	cout << "Laptop model - " << model << "\tPrice - " << price << endl;
}

void Laptop::InfoAboutObjects()  
{
	cout << "Created objects: " << s_createdObjects << endl;  

}
