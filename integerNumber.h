#pragma once
#include "realNumber.h"
class integerNumber :
	public realNumber
{
	friend integerNumber operator+(const integerNumber & another1, const integerNumber & another2);
	friend integerNumber operator*(const integerNumber & another1, const integerNumber & another2);
public:
	integerNumber();
	integerNumber(int);
	~integerNumber();
private:
	int nu;
};


