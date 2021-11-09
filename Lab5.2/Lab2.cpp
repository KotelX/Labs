#include <iostream>
#include <clocale>  
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "n= "; cin >> n;
    cout << " m= "; cin >> m;
    double a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    double b[100], p;
    for (int j = 0; j < m; j++)
    {
        p = a[0][j];
        for (int i = 1; i < n; i++)
            p *= a[i][j];
        b[j] = p;
    }
    for (int j = 0; j < m; j++)
        cout << "b[" << j << "]=" << b[j] << " ";
    return 0;
}