#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string country;
	char choice;
	double temperature;
	double distance;
	double weight;

	cout << "Enter a country name: ";
	getline(cin, country);
	cout << "\n";
	cout << "\n";
	cout << "Converter Toolkit" << endl;
	cout << "-----------------" << endl;
	cout << "1. Temperature Converter" << endl;
	cout << "2. Distance Converter" << endl;
	cout << "3. Weight Converter" << endl;
	cout << "4. Quit" << endl;
	cout << "\n";
	cout << "Enter your choice (1-4):";
	cin >> choice;

	switch (choice) {
	case '1': cout << "Please enter temperature in Celsius (such as 24): ";
		cin >> temperature;
		cout << "It is " << 1.8 * temperature + 32 << " in Fahrenheit." << endl;
		break;
	case '2': cout << "Please enter distance in Kilometers (such as 18.54): ";
		cin >> distance;
		if (distance < 0) {
			cout << "!!! Program does not convert negative distance !!!" << endl;
		}
		else if (distance >= 0) {
			cout << fixed << setprecision(2) << "It is " << distance * 0.6 << " in Miles" << endl;
		}
		break;
	case '3': cout << "Please enter weight in Kilograms (such as 48.2): " << endl;
		cin >> weight;
		if (weight < 0) {
			cout << "!!! Program does not convert negative weight !!!" << endl;
		}
		else if (weight >= 0) {
			cout << fixed << setprecision(1) << "It is " << weight * 2.2 << " in pounds" << endl;
		}
		break;
	case '4': cout << "Program is quitting" << endl;
		break;
	default: cout << "Please enter your choice using numbers 1, 2, 3, or 4" << endl;
	}
		cout << "\n";
		cout << country << " sounds fun!" << endl;
		cout << "\n";
		cout << "\n";
		cout << "Thank you for testing my program!!" << endl;
		cout << "PROGRAMMER: Jason Rahimi" << endl;
		cout << "CMSC140 Common Project 2" << endl;
		cout << "Due Date: 3/8/2021" << endl;
	
}