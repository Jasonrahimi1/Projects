#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ofstream outputFile;
int NumOfEmployees();
int TotDaysAbsent(int);
double AverageAbsent(double, double);

int main() {
	int employees;
	double missed;
	double average;
	outputFile.open("employeeAbsences.txt");
	cout << "Calculate the average number of days a company's employees are absent." << endl;
	cout << "\n";
	employees = NumOfEmployees();
	missed = TotDaysAbsent(employees);
	average = AverageAbsent(employees, missed);
	outputFile << "\n" << setw(6) << "The " << employees << " employees were absent a total of " << missed << " days." << endl;
	outputFile << setw(39) << "The average number of days absent is " << fixed << setprecision(1) << average << " days.\n" << endl;
	outputFile << setw(26) << "Programmer: Jason Rahimi" << endl;
	outputFile.close();
}

int NumOfEmployees() {
	int number;
	cout << "Please enter the number of employees in the company: ";
	cin >> number;
	while (number < 1) {
		cout << "Cannot have less than 1 employee, please try again." << endl;
		cin >> number;
	}
	return number;
}

int TotDaysAbsent(int employees) {
	int ID;
	int missed;
	int totmissed = 0;
	outputFile << setw(25) << "EMPLOYEE ABSENCE REPORT" << endl;
	outputFile <<  setw(14) << "employee id " << setw(15) << "days absent" << endl;
	for (int counter = 1; counter <= employees; counter++) {
		cout << "Please enter an employee ID: ";
		cin >> ID;
		cout << "Please enter the number of days this employee was absent: ";
		cin >> missed;
		while (missed < 0) {
			cout << "The number of days must not be negative." << endl;
			cout << "Please re-enter the number of days absent: ";
			cin >> missed;
		}
		outputFile << setw(9) << ID << setw(15) << missed << "\n";
		totmissed += missed;
	}
	return totmissed;
}

double AverageAbsent(double employees, double missed) {
	double average;
	average = missed / employees;
	return average;
}