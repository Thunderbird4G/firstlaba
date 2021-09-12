#include <iostream>

using namespace std;

double F(double x)
{
    return  (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}

void main()
{
    cout.precision(4); // формат вывода
    cout << "nvvedite x \n";
    double y;
    int x;  
    cin >> x;
    y = F(x);
    cout << y;
}
    