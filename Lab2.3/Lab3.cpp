#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Введите параметр X";
    cin >> x;
    cout << "Введите параметр Y";
    cin >> y;
    cout << "Введите параметр Z";
    cin >> z;
    cout << max(z, max(x, y)) / min(x, y) + 5;
    return 0;
}
