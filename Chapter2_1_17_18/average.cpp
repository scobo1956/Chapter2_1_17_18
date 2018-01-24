#include <iostream>
using std::cout;

double average(int x, int y, int z)
{
	cout << "\n average: " << (static_cast<double>(x) + y + z) / 3;
	return(static_cast<double>(x) + y + z) / 3;
}