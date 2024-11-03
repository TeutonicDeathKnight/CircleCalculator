// CircleCalculator.cpp -- Calculate and display circle details based on user input
//CSIS 212-<D02_202440>
//<Citations if necessary> -- citations are required
//  for any references you used (outside of your book, 
//  the website associated with your book, or references
//  provided in class/Canvas).

//include and using statements
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Circle.h";

using namespace std;

//function prototypes
void promptUserEntry(Circle& circle);
void displayCircleInfo(const Circle& circle);

int main()
{
	cout << "Zachary Seeley -- Lab 2 - Class Creation" << endl << endl << endl;

	bool programActive = true;

	while (programActive)
	{
		Circle circle;

		displayCircleInfo(circle);
	}


	//Closing program statements
	system("pause");
	return 0;
}

//function definitions

//Prompt user to enter circle details
void promptUserEntry(Circle& circle)
{
	cout << "Radius of Circle as a positive number (-1 to exit): "
}

//Display Circle Info
void displayCircleInfo(const Circle& circle)
{
	cout << "Circle Displayed" << endl << endl;
}