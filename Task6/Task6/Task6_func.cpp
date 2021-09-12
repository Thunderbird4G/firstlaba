#include <iostream>
#include <string>

using namespace std;

double x, result;
void F();

void F()
{
	result=(sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}