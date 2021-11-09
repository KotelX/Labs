#include <iostream>
#include <conio.h>
#include <clocale>
#include <math.h>
#include <corecrt_math_defines.h>
using namespace std;

//# define M_PI           3.14159265358979323846

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, h, result;
    cout << "Введите угол А" << endl;
    cin >> A;
    cout << "Введите угол В" << endl;
    cin >> B;
    cout << "Введите угол С" << endl;
    cin >> C;
    cout << "Введите высоту h" << endl;
    cin >> h;
    if (A + B + C != 180) { cout << "Сумма углов в треугольнике должна быть равна 180°"; return 0; }
    result = h * h * sin(A * M_PI / 180);
    result /= (2 * sin(B * M_PI / 180) * sin(C * M_PI / 180));
    cout << result;
    //_getch();
    return result;
}