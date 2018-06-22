
#include "realNumber.h"
#include<iostream>

using namespace std;

realNumber::realNumber()
{
}

realNumber::realNumber(double n):Number::Number(n)
{
	number = n;
}


realNumber::~realNumber()
{
}

realNumber operator+(const realNumber & another1, const realNumber & another2)
{
	return realNumber(another1.number+another2.number);
}

realNumber operator*(const realNumber & another1, const realNumber & another2)
{
	return realNumber(another1.number*another2.number);
}

