#pragma once
#include "Number.h"
class complexNumber :
	public Number
{
	friend complexNumber operator+(const complexNumber & another1, const complexNumber & another2);
	friend complexNumber operator*(const complexNumber & another1, const complexNumber & another2);
public:
	complexNumber();
	complexNumber(double, double);
	void print()const;
	~complexNumber();
private:
	double real;
	double image;
};


