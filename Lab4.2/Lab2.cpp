#include <iostream>
#include <clocale>  
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    long p = 1;
    cout << "Введите n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        p *= i;
    cout << "n! = " << p;
    return 0;
}