#pragma once
#include "Number.h"
class realNumber :
	public Number
{
	friend realNumber operator+(const realNumber & another1, const realNumber & another2);
	friend realNumber operator*(const realNumber & another1, const realNumber & another2);
public:
	realNumber();
	realNumber(double);
	~realNumber();
private:
	double number;
};


