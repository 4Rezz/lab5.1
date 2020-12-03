// Lab_04_3.cpp
// < Ілюшин Роман >
// Лабораторна робота No 5.1
// Функції що містять арифметичний вираз
// Варіант 0.2

#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y); // прототип
int main()
{
	double p, q;

		cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = k(p + sqrt(q), q - sqrt(p)) - k(1, p + q) * k(p + sqrt(q), q - sqrt(p)) - k(1, p + q);
	cout << "c = " << c << endl;
	return 0;
}
double k(const double x, const double y) // визначення
{
	return (x / (abs(pow(x, 3) + pow(y, 3)))) + (y / (abs(x + y)));
}