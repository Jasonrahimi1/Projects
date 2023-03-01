#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int subjects;
	double base_one = 100;
	double base_two = 130;
	double base_three = 150;
	double base_four = 160;
	double base_five = 165;
	double price;
	double fancy_number;
	double date_number;
	string fancy;
	string date;
	cout << "Enter the number of subjects in the portrait: ";
	cin >> subjects;
	cout << "Do you want a fancy background (y/n)? ";
	cin >> fancy;
	cout << "Do you want an appointment date (y/n)? ";
	cin >> date;


    if (subjects == 1 && fancy == "y" && date == "y") {
		fancy_number = 0.1 * base_one;
			date_number = 0.1 * base_one;
			price = base_one + fancy_number + date_number;
			cout << fixed << setprecision(2) << "The price is: $" << price << endl;
		}
		else if (subjects == 1 && fancy == "n" && date == "n") {
			cout << fixed << setprecision(2) << "The price is: $" << base_one << endl;
		}
		else if (subjects == 1 && fancy == "n" && date == "y") {
			date_number = 0.1 * base_one;
			price = base_one + date_number;
			cout << fixed << setprecision(2) << "The price is: $" << price << endl;
		}
		else if (subjects == 1 && fancy == "y" && date == "n") {
			fancy_number = 0.1 * base_one;
			price = base_one + fancy_number;
			cout << fixed << setprecision(2) << "The price is: $" << price << endl;
		}

   if (subjects == 2 && fancy == "y" && date == "y") {
		fancy_number = 0.1 * base_two;
		date_number = 0.1 * base_two;
		price = base_two + fancy_number + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 2 && fancy == "n" && date == "n") {
		cout << fixed << setprecision(2) << "The price is: $" << base_two << endl;
	}
	else if (subjects == 2 && fancy == "n" && date == "y") {
		date_number = 0.1 * base_two;
		price = base_two + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 2 && fancy == "y" && date == "n") {
		fancy_number = 0.1 * base_two;
		price = base_two + fancy_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}

	if (subjects == 3 && fancy == "y" && date == "y") {
		fancy_number = 0.1 * base_three;
		date_number = 0.1 * base_three;
		price = base_three + fancy_number + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 3 && fancy == "n" && date == "n") {
		cout << fixed << setprecision(2) << "The price is: $" << base_three << endl;
	}
	else if (subjects == 3 && fancy == "n" && date == "y") {
		date_number = 0.1 * base_three;
		price = base_three + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 3 && fancy == "y" && date == "n") {
		fancy_number = 0.1 * base_three;
		price = base_three + fancy_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}

	if (subjects == 4 && fancy == "y" && date == "y") {
		fancy_number = 0.1 * base_four;
		date_number = 0.1 * base_four;
		price = base_four + fancy_number + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 4 && fancy == "n" && date == "n") {
		cout << fixed << setprecision(2) << "The price is: $" << base_four << endl;
	}
	else if (subjects == 4 && fancy == "n" && date == "y") {
		date_number = 0.1 * base_four;
		price = base_four + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects == 4 && fancy == "y" && date == "n") {
		fancy_number = 0.1 * base_four;
		price = base_four + fancy_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}

	if (subjects >= 5 && fancy == "y" && date == "y") {
		fancy_number = 0.1 * base_five;
		date_number = 0.1 * base_five;
		price = base_five + fancy_number + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects >= 5 && fancy == "n" && date == "n") {
		cout << fixed << setprecision(2) << "The price is: $" << base_five << endl;
	}
	else if (subjects >= 5 && fancy == "n" && date == "y") {
		date_number = 0.1 * base_five;
		price = base_five + date_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	else if (subjects >= 5 && fancy == "y" && date == "n") {
		fancy_number = 0.1 * base_five;
		price = base_five + fancy_number;
		cout << fixed << setprecision(2) << "The price is: $" << price << endl;
	}
	if (subjects <= 0) {
		cout << "Enter a number greater than zero." << endl;
	}
	if (!(fancy == "y" || fancy == "n" || date == "y" || date == "n")) {
		cout << "Enter y or n" << endl;
	}
}