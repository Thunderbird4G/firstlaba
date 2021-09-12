#include <iostream>

using namespace std;

double x, result;
void F(void);

void main()
{
    cout.precision(4); // формат вывода
    cout << "vvedite x \n";
    cin >> x;
    F();
    cout << result;
}

void F(void)
{
    result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));

}
