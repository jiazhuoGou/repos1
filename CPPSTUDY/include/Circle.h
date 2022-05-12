#pragma once
class Circle
{
private:
	double radius_;
public:	
	Circle(double r);
	Circle();
	void setRadius(double radius);
	double getRadisu();
	double getArea();
	//void print(Circle c);
	void print(Circle &c);
	void print(Circle *c);

};