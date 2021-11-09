#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int E = 0, i = 1;
    double result = 0;
    cout << "Input E" << endl;
    cin >> E;
    while (i <= E)
    {
        result += 1 / pow(2, i);
        i++;
    }
    cout << 1 - result;
    return 0;
}