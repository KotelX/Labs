#include <iostream>
#include <clocale>  
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    short n, a, b, c, s;
    for (n = 100; n <= 999; n++)
    {
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;
        s = a + b + c;
        if (s % 2) cout << n << '   ' << endl;
    }
    return 0;
}