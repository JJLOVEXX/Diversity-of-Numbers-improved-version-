
#include "integerNumber.h"


integerNumber::integerNumber()
{
}

integerNumber::integerNumber(int n) :realNumber(n)
{
	nu = n;
}

integerNumber operator+(const integerNumber & another1, const integerNumber & another2)
{
	return integerNumber(another1.nu+ another2.nu);
}

integerNumber operator*(const integerNumber & another1, const integerNumber & another2)
{
	return integerNumber(another1.nu*another2.nu);
}
integerNumber::~integerNumber()
{
}

