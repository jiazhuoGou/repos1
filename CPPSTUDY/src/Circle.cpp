#include "../include/Circle.h"

Circle::Circle(double r)
{
	radius = r;
}

Circle::Circle()
{
	radius = 1;
}

double Circle::getArea()
{
	return (3.14 * radius * radius);
}