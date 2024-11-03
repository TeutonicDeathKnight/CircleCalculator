#include <string>
#include <cmath>
#include "Circle.h"

using namespace std;

double Circle::calcDiameter() const { return 2.0 * radius; }

double Circle::calcArea() const { return 3.14 * pow(radius, 2); }

double Circle::calcCircumference() const { return 2.0 * 3.14 * radius; }

void Circle::setRadius(int input) { radius = input; }

int Circle::getRadius() const { return radius; }

void Circle::setColorOfFill(string input) { colorOfFill = input; }

string Circle::getColorOfFill() const { return colorOfFill; }

Circle::Circle() { setRadius(0); setColorOfFill(""); }