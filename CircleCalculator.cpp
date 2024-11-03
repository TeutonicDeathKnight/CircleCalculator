// CircleCalculator.cpp -- Calculate and display circle details based on user input
//CSIS 212-<D02_202440>

//include and using statements
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Circle.h"

using namespace std;

//function prototypes
void displayCircleInfo(const Circle& circle);
void collectRadiusInput(Circle& circle, int& radInput, bool& validRadInput, bool& programActive);
void collectColorInput(Circle& circle, string& colInput, bool& validColorInput);
void clearInputStream();

int main()
{
	cout << "Zachary Seeley -- Lab 2 - Class Creation" << endl << endl << endl;

	bool programActive = true;

	cout << fixed;

	while (programActive)
	{
		bool validRadInput = false, validColorInput = false;

		Circle circle;
		string colInput;
		int radInput;

		cout << left;

		while (!validRadInput)
			collectRadiusInput(circle, radInput, validRadInput, programActive);

		if (!programActive)
			continue;

		while (!validColorInput)
			collectColorInput(circle, colInput, validColorInput);

		cout << endl;

		displayCircleInfo(circle);
	}

	//Closing program statements
	system("pause");
	return 0;
}

//function definitions

//Display Circle Info
void displayCircleInfo(const Circle& circle)
{
	cout << right << setw(25) << "Circle Information:" << endl << endl
		<< setw(20) << "Radius: " << circle.getRadius() << endl
		<< setw(20) << "Circumference: " << setprecision(1) << circle.calcCircumference() << endl
		<< setw(20) << "Area: " << setprecision(1) << circle.calcArea() << endl
		<< setw(20) << "Diameter: " << setprecision(0) << circle.calcDiameter() << endl
		<< setw(20) << "Fill Color: " << circle.getColorOfFill() << endl << endl;
}

void collectRadiusInput(Circle& circle, int& radInput, bool& validRadInput, bool& programActive)
{
	cout << "Radius of Circle as a positive number (-1 to exit): ";
	cin >> radInput;

	if (cin.fail() || radInput < -1 || (radInput > -1 && radInput < 1))
	{
		cout << endl << "Error: Input must be a numeric value 1 or greater. -1 to exit." << endl;
	}
	else
	{
		circle.setRadius(radInput);
		validRadInput = true;
	}

	if (radInput == -1)
	{
		programActive = false;
	}

	clearInputStream();
}

void collectColorInput(Circle& circle, string& colInput, bool& validColorInput)
{
	cout << "Fill Color of Circle (blank not allowed): ";
	getline(cin, colInput);


	if (cin.fail() || colInput.empty() || colInput[0] == ' ')
	{
		cout << endl << "Error: Input is blank. Input a non-blank color to fill the circle." << endl
			<< "Inputting a space before the name of the color is also not allowed." << endl;
	}
	else
	{
		circle.setColorOfFill(colInput);
		validColorInput = true;
	}

	colInput.clear();
}

//Clear input stream
void clearInputStream()
{
	//clear 
	cin.clear();
	//ignore rest of line determining max length of line until the newline character appears
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}