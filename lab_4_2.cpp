// Lab_4_2.cpp 
// Лабораторна робота № 4_2 
// Кузьмич Максим
// Цикли
// Варіант 27

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double xStart;
	double xOver;
	double step;
	double y;
	double right;
	double left;

	cout << "xStart "; cin >> xStart;
	cout << "xOver "; cin >> xOver;
	cout << "step "; cin >> step;

	cout << fixed;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(10) << "xStart" << setw(5) << "|"
		<< setw(9) << "y" << setw(9) << "|" << endl;
	cout << "----------------------------------" << endl;

	while (xStart <= xOver) {

		left = abs(9 * pow(xStart, 3) + 2);

		if (xStart < 4) {
			right = 3 * pow(xStart, 5) - pow(xStart, 3) + 2 * xStart - 1;
		}
		else if (4 <= xStart && xStart < 7) {
			right = atan((xStart - 2) / 3);
		}
		else {
			right = log10(2 * pow(xStart, -1) + exp(3 * xStart + 1));
		}

		y = left + right;

		cout << "|" << setw(10) << setprecision(2) << xStart << setw(5) << "|" << setw(11)
			<< setprecision(3) << y << setw(7) << "|" << endl;

		xStart += step;
	}
	cout << "----------------------------------" << endl;
}
