// Sergio Cobo
// COP1334C-2983
// Assignment: Pr2-3, p.89
// Date Due: 1/17/18
// Description: Write a simple C++ program

#include<iostream>
#include "Program2_1.h"
using namespace std;

int main()
{
	cout << "Programming is ";
	//addTwoInts();
	int x, y, z;
	double i = 3.4;
	double k = 3.4;
	//x = computeSum();
	cout << "enter three integer numbers: ";
	cin >> x >> y >> z;
	i = average(x, y, z);
	return 0;
}