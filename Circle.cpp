#include <string>
#include <cmath>
#include "Circle.h"

using namespace std;

double Circle::calcDiameter() const
{
	double diameter = 2.0 * radius;

	return diameter;
}

double Circle::calcArea() const
{
	double area = 3.14 * pow(radius, radius);

	return area;
}

double Circle::calcCircumference() const
{
	double circumference = 2.0 * 3.14 * radius;

	return circumference;
}

void Circle::setRadius(int input) { radius = input; }

int Circle::getRadius() const { return radius; }

void Circle::setColorOfFill(string input) { colorOfFill = input; }

string Circle::getColorOfFill() const { return colorOfFill; }