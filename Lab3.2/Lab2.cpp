#include <iostream>
#include <clocale>  
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите два числа" << endl;
    cout << "A=";
    cin >> a;
    cout << "B=";
    cin >> b;
    while (a != b)
        if (a > b) a -= b;
        else b -= a;
    cout << "НОД = " << a;
    return 0;
}
