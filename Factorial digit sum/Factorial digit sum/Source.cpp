#include <iostream>

using namespace std;

int product[1000];

int main()
{
	//init
	for (int i = 0; i != 1000; ++i)
		product[i] = 0;
	product[0] = 1;
	for (int i = 2; i <= 100; ++i)
	{
		for (int j = 0; j != 999; ++j)
			product[j] *= i;
		for (int j = 0; j != 999; ++j)
		{
			product[j + 1] += product[j] / 10;
			product[j] %= 10;
		}
			
	}
	int sum = 0;
	for (int i = 0; i != 1000; ++i)
		sum += product[i];
	cout << sum << "\n";
	return 0;
}