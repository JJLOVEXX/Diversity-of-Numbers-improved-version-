
#include"Number.h"
#include "realNumber.h"
#include "integerNumber.h"
#include"complexNumber.h"
#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "Please input a number,'1'->realNumber calculation,'2'->interger calculation,'3'->complex calculation,'0'->exit: " << endl;
	while (cin >> number&&number)
	{
		if (number == 1 || number == 2 || number == 3)
		{
			if (number == 1)
			{
				double a = 0, b = 0;
				cout << "Please input two double numbers: " << endl;
				cin >> a >> b;
				realNumber r1(a), r2(b), r3(r1),r4(0),r5(0);
				cout << "Addition." << endl;
				r4= r1 + r2;
				r4.print();
				cout << "Multiplication." << endl;
				r5 = r1 * r2;
				r5.print();
			}
			else if (number == 2)
			{
				cout << "Please input two integer numbers: " << endl;
				int c = 0, d = 0;
				cin >> c >> d;
				integerNumber i1(c), i2(d), i3(i1),i4(0),i5(0);
				cout << "Addition." << endl;
				i4=i1+i2;
				i4.print();
				cout << "Multiplication." << endl;
				i5 = i1 * i2;
				i5.print();
			}
			else
			{
				cout << "Please input two numbers(real and image): " << endl;
				double e = 0, f = 0, g = 0, h = 0;
				cin >> e >> f;
				cout << "Please input two numbers(real and image): " << endl;
				cin >> g >> h;
				complexNumber c1(e, f), c2(g, h), c3(c1),c4(0,0),c5(0,0);
				cout << "Addition." << endl;
				c4 = c1 + c2;
				c4.print();
				cout << "Multiplication." << endl;
				c5 = c1 * c2;
				c5.print();
			}
		}
		cout << "Please input a number,'1'->realNumber calculation,'2'->interger calculation,'3'->complex calculation: " << endl;
	}
	return 0;
}


