#include <iostream>
using std::cout;
using std::cin;

void addTwoInts()
{
	int x;
	int j;
	double y = 8.9;
	x = 5;
	x = y;
	double p;
	p = 15.0 / 6;

	cout << "how many books are you checking out: ";
	cin >> x;
	cout << "\nhow many months will it take to read: ";
	cin >> j;
	//p = x / y;   // implicit coversion for x to type double
	p = static_cast<double>(x) / j;  // explict conversion of x to type double

	cout << "\naverage is: " << p;
}