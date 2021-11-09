#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Input X" << endl;
    cin >> x;
    if (x > -2 && x < 2)
        cout << "y = 1";
    else
        cout << "y = 0";
    return 0;
}