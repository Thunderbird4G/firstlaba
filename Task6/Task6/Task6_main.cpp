#include <iostream>

using namespace std;

extern double x, result;
void F();

void main()
{
    cout.precision(4); // ������ ������
    cout << "vvedite x \n";
    cin >> x;
    F();
    cout << result;
}
