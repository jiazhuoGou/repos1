#include<iostream>
#include "../include/Circle.h"

using namespace std;

int main(void)
{
	Circle circle;
	Circle c2(3.2);

	cout << c2.getArea() << endl;

	system("pause");
	return 0;
}