#pragma once
class VGA
{
	char* model = nullptr;
	double price;

public:
	VGA() = default; 
	VGA(const char* mod); 
	VGA(const char* mod, double pr); 
	~VGA();
	VGA(const VGA& b); // copy constructor 

	void SetModel(const char* mod);
	void SetPrice(double pr);

	const char* GetModel()const;
	double GetPrice()const;

	void Print()const;


};

