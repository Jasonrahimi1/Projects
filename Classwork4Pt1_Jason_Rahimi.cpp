#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double units;
	double package = 99;

	cout << "How many units were sold? ";
	cin >> units;

	if (units <= 0)
	{
		cout << "Units sold must be greater than zero." << endl;
	}
	else if (units >= 1 && units <=9)
	{ 
		cout << fixed << setprecision(2) << "The total cost of the purchase is $" << units * package << endl;
	}
	else if (units >= 10 && units <= 19)
	{
		cout << fixed << setprecision(2) << "The total cost of the purchase is $" << units * package * 0.8 << endl;
	}
	else if (units >= 20 && units <= 49)
	{
		cout << fixed << setprecision(2) << "The total cost of the purchase is $" << units * package * 0.7 << endl;
	}
	else if (units >= 50 && units <= 99)
	{ 
		cout << fixed << setprecision(2) << "The total cost of the purchase is $" << units * package * 0.6 << endl;
	}
	else if (units >= 100)
	{
		cout << fixed << setprecision(2) << "The total cost of the purchase is $" << units * package * 0.5 << endl;
	}
}