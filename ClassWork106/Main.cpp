#include "HDD.h"
#include "RAM.h"
#include "Laptop.h"
#include "CPU.h"
#include "VGA.h"
#include <iostream>

using namespace std;

int main()
{
	HDD obj1("Asus", 2000);
	RAM obj2("ATI", 2500);
	CPU obj3("Ryzen", 3500);
	VGA obj4("Nvidia", 6500);  

	Laptop obj("HP", obj1, obj2, obj3, obj4);    
	obj.Print(); 

	Laptop::InfoAboutObjects(); 

	return 0;
}