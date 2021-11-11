#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int key;
	cout << "Нажмите одну из курсорных клавиш" << endl;
	while (true) //Сделать проверку по коду клавиши Esc
	{
		key = _getch();
		switch (key)
		{
			case 77: cout << "right" << endl; break;
			case 75: cout << "left" << endl; break;
			case 72: cout << "up" << endl; break;
			case 80: cout << "down" << endl; break;
			case 224:  break;						//Чтобы убрать код 224(Он идет вместе с кодом стрелок)
			default:
				cout << "Вы нажали клавишу № " << key << endl;
				break;
		}
	}
}
