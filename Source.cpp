// Lab_04_3.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 4.3
// Цикли, задані формулами.
// Варіант 12
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
	cout << "x="; cin >> x;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << fixed;
	cout <<" ______________________" << endl;
	cout << "|" << setw(10) << "x" << "|" << setw(10) << "F" << "|" << endl;
	cout << "_______________________" << endl;
	x = xp;
		while (x <= xk)
		{
			if (x < 0.6 && b + c != 0)
				F = a * x * x + b * b * b + c;
			else
				if (x > 0.6 && (b + c) == 0)
					F = (x - a) / (x - c);
				else
					F = (x / c) + (x / a);
			cout << "|" << setw(10) << setprecision(3) << x << "|" << setw(10) << setprecision(3) << F << "|" << endl;
			x += dx;
		}
	cout << "_______________________" << endl;
	return 0;
}