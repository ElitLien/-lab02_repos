// Lab_02.cpp
// М'ягких Владислав
// Лабораторна робота №2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double alpha;
	double z1;
	double z2;

	cout << "alpha = "; cin >> alpha;

	z1 = (1 + 2 * (sin(alpha) * sin(alpha))) / (1 + sin(2 * alpha));
	z2 = (1 - tan(alpha)) / (1 + tan(alpha));

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	system("pause");
	return 0;
}