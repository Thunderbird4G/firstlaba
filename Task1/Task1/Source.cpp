#include <iostream>

using namespace std;

void main()
{
    int x = 5; //Task1
    double f;
    f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
    cout.precision(4);
    cout << f;

    cout << " \nvvedite x \n";
    cin >> x;
    f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
    cout << f;
}
