#include <iostream>
#include "Circle.h"
#include <cmath>
using namespace std;
const double PI = 3.141592654;

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double new_radius)
{
	radius = new_radius;
}

void Circle::setRadius(double new_radius)
{
	radius = new_radius;
}

void Circle::setDiameter(double new_diameter)
{
	radius = new_diameter / 2;
}
double Circle::calcCircumference()
{
	return 2 * PI * radius;
}

double Circle::calcArea()
{
	return PI * pow(radius, 2);
}

void Circle::setColor(Color new_color)
{
	circle_color = new_color;
}

void Circle::printOut()
{
	double circ = calcCircumference();
	double area = calcArea();

	cout << "Color: " << output_colors[circle_color] << endl;
	cout << "Circumference: " << circ << endl;
	cout << "Area: " << area << endl << endl;
}