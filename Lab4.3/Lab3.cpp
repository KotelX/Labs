#include <iostream>
using namespace std;

int main()
{
	const int b1 = 16, b2 = 17, b3 = 21, mass = 185;
	int count = 0;
	for (size_t i = 0; i < b1; i++)
	{
		for (size_t j = 0; j < b2; j++)
		{
			for (size_t k = 0; k < b3; k++)
			{
				if (i * b1 + j * b2 + k * b3 == mass)
					count++;
			}
		}
	}
	cout << count << " options";
}