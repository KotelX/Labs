#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "n=";
    cin >> n;
    double a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min, nmin;
    for (int i = 0; i < n - 1; i++)
    {
        min = a[i];
        for (int j = i + 1; j < n; j++)
            if (a[j] < min)
            {
                nmin = j;
                min = a[j];
            }
        a[nmin] = a[i]; a[i] = min;
    }
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}