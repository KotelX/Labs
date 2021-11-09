#include <iostream>
#include <conio.h>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    //Устанавливает или извлекает языковой стандарт времени выполнения.
    setlocale(LC_ALL, "Russian");
    short x, s, a, b, c;
    cout << endl << "Введите трехзначное число" << endl;
    cin >> x;
    if (x / 1000 > 1) cout << "Вы ввели ";
    a = x / 100;                    //Получаем сотни
    b = x / 10 % 10;                //Получаем десятки
    c = x % 10;                     //Получаем Еденицы
    s = a + b + c;                  //Складываем
    cout << "Сумма цифр в числе " << x << "равна" << s << endl;
    _getch();
    return s;
}