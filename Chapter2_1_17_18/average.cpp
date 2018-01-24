#include <iostream>
using std::cout;

int average(int x, int y, int z)
{
	cout << "\n average: " << (static_cast<double>(x) + y + z) / 3;
	return(x + y + z) / 3;
}