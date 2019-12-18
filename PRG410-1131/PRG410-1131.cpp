// PRG410-1131.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
(Add the function print to this class to output the radius, area, and circumference of a circle.)
Now every cylinder has a base and height, where the base is a circle. Design a class cylinderType
that can capture the properties of a cylinder and perform the usual operations on the cylinder.
Derive this class from the class circleType designed in Chapter 10. Some of the operations that
can be performed on a cylinder are as follows: calculate and print the volume, calculate and print
the surface area, set the height, set the radius of the base, and set the center of the base.
Also, write a program to test various operations on a cylinder. Assume the value of \piπ to be 3.14159.
*/

#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "cylinderType.h"  

using namespace std;

int main()
{
	cylinderType cylinder1(4.5, 6.75);
	cylinderType cylinder2;

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "***** Cylinder 1 *****" << endl;
	cylinder1.print();
	cout << endl;

	cylinder2.setRadius(3.75);
	cylinder2.setHeight(8.25);

	cout << "***** Cylinder 2 *****" << endl;
	cylinder2.print();
	cout << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
