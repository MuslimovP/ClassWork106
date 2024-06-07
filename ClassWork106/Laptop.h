#pragma once
#include "HDD.h"
#include "RAM.h"
#include "CPU.h"
#include "VGA.h"

class Laptop
{
	char* model;
	HDD hdd;
	RAM ram;
	CPU cpu;
	VGA vga;
	double price;
	int counter;

	static int s_createdObjects;


public:


	static void incrementCount() 
	{
		s_createdObjects++;
	}
	static void InfoAboutObjects(); 

	Laptop() = default;
	Laptop(const char* mod, HDD hd, RAM rm, CPU cp, VGA vg); 
	~Laptop();
	double GetPrise()const;
	void Print()const;
};

