/*
 * Class: CMSC140 CRN: 30311
 * Instructor: Sandro Fouche
 * Project<1>
 * Description: Show concepts learned from chapters 1, 2, and 3.
 * Due Date: February 22, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Jason Rahimi
   */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

string name;
int age;
int years = 1;
int months = 12;
int days = 30;
int hours = 24;
int minutes = 60;
int seconds = 60;
int dog = 7;
int goldfish = 5;
double numberA;
double numberB;
int addition;
int division;
double decimal;

int main()
{
	cout << "**************** Robot Prototype Scripting ********************" << endl;
	cout << "\n";
	cout << "Hello, welcome to Mongtomery College! My name is Nao. May I have your name?" << endl;
	getline(cin,name);
	cout << "Nice to have you with us today, " << name << "!" << endl;
	cout << "let me impress you with a small game." << endl;
	cout << "Give me the age of an important person or a pet to you." << endl;
	cout << "Please give me only a number:" << endl;
	cin >> age;
	cout << "\n";
	cout << "You have entered " << age << "." << endl;
	cout << "If this is for a person, the age can be expressed as:" << endl;
	cout << age * years << " years" << endl;
	cout << "or " << age * years * months << " months" << endl;
	cout << "or about " << age * years * months * days << " days" << endl;
	cout << "or about " << age * years * months * days * hours << " hours" << endl;
	cout << "or about " << age * years * months * days * hours * minutes << " minutes" << endl;
	cout << "or about " << age * years * months * days * hours * minutes * seconds << " seconds." << endl;
	cout << "If this is for a dog, it is " << age * dog << " years old in human age." << endl;
	cout << "If this is for a gold fish, it is " << age * goldfish << " years old in human age." << endl;
	cout << "\n";
	cout << "Let's play another game, " << name << ". Give me a whole number." << endl;
	cin >> numberA;
	cout << "Very well. Give me another whole number." << endl;
	cin >> numberB;
	addition = numberA + numberB;
	cout << "Using the operator '+' in C++, the result of " << numberA << " + " << numberB << " is " << addition << "." << endl;
	division = numberA / numberB;
	cout << "using the operator '/', the result of " << numberA << " / " << numberB << " is " << division << endl;
	decimal = numberA / numberB;
	cout << showpoint << setprecision(2) << "however, the result of " << numberA << " / " << numberB << " is about " << setprecision(1) << decimal << "." << endl;
	cout << "\n";
	cout << "Thank you for testing my program!!" << endl;


}