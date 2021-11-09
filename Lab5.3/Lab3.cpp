#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "n= "; cin >> n;
    double a[100], maxV = 0, maxI;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maxV < a[i]) { maxV = a[i]; maxI = i; }
    }
    for (int i = 0; i < n; i++)
    {
        cout << (i >= maxI) * a[i] << endl;
    }
}
