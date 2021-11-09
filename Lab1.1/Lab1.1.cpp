#include <iostream>
#include <conio.h>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    //Устанавливает или извлекает языковой стандарт времени выполнения.
    setlocale(LC_ALL, "Russian");
    double fahr, cels;
    cout << endl << "Введите температуру по Фаренгейту" << endl;
    cin >> fahr;
    //if (fahr < -459.67) cout << "Некорректное значение температуры";
    cels = 5.0 / 9 * (fahr - 32);
    cout << "По Фаренгейту : " << fahr << ", по Цельсию : " << cels << endl;
    _getch();
    return 0;
}