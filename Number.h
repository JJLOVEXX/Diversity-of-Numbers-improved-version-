#pragma once
class Number
{
	friend Number operator+(const Number & another1, const Number & another2);
	friend Number operator*(const Number & another1, const Number & another2);
public:
	Number();
	Number(double);
	virtual void print()const;
	~Number();
private:
	double num;
};


