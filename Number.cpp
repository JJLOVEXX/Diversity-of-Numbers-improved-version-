
#include "Number.h"
#include<iostream>

using namespace std;

Number operator+(const Number & another1, const Number & another2)
{
	return Number(another1.num+another2.num);
}

Number operator*(const Number & another1, const Number & another2)
{
	return Number(another1.num*another2.num);
}

Number::Number()
{
}

Number::Number(double n)
{
	num = n;
}

void Number::print() const
{
	cout << num << endl;
}

Number::~Number()
{
}


