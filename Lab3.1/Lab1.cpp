#include <iostream>
#include <clocale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double s, x, e;
    int i;
    cout << "Введите точность E= ";
    cin >> e;
    s = 0; i = 1; x = 1 / 6;
    while (x > e)
    {
        s += x;
        i++;
        x /= (++i) * (i + 2);
    }
    cout << "s = " << s;
    return 0;
}
