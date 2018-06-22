
#include "complexNumber.h"
#include<iostream>

using namespace std;

complexNumber::complexNumber()
{
}

complexNumber::complexNumber(double a, double b)
{
	real = a;
	image = b;
}

void complexNumber::print() const
{
	if (image>0)
	{
		cout << real << '+' << image << "i" << endl;
	}
	else if (real == 0)
	{
		cout << real << endl;
	}
	else if (image<0)
	{
		cout << real << image << "i" << endl;
	}
}

complexNumber operator+(const complexNumber & another1, const complexNumber & another2)
{
	return complexNumber(another1.real+another2.real,another1.image+another2.image);
}

complexNumber operator*(const complexNumber & another1, const complexNumber & another2)
{
	complexNumber c;
	c.real = another1.real * another2.real - another1.image * another2.image;
	c.image = another1.real * another2.image + another1.image * another2.real;
	return c;
}


complexNumber::~complexNumber()
{
}

