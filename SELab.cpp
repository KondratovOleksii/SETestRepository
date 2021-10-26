// SELab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double multiplicationJPlusX(double x, int n)
{
	double multiplication = 1.0;
	for (int i = 2; i < n - 1; i++) {
		multiplication *= i + x;
	}
	return multiplication;
}

double multiplicationXPlusIPlusJMultiplyJ(double x, int n, int i)
{
	double multiplication = 1.0;
	for (int j = 0; j < n; j++) {
		multiplication *= x + i + pow(j, 2);
	}
	return multiplication;
}

double y(double x, int n) {
	double addition = 0.0;
	if (x < 0) {
		return multiplicationJPlusX(x, n);
	}
	for (int i = 0; i < n; i++) {
		addition += multiplicationXPlusIPlusJMultiplyJ(x, n, i);
	}
	return addition;
}

int main()
{
	double a, b, step;
	int n;
	std::cout << "Input a, b, step please\n";
	std::cin >> a >> b >> step;
	std::cout << "Input n, please\n";
	std::cin >> n;
	for (double i = a; i <= b; i += step) {
		std::cout << "y" << (i - a) / step << " = " << y(i, n) << std::endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
