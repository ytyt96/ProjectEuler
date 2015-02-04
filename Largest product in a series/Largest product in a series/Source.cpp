#include <fstream>
#include <iostream>

#define LENGTH 13

using namespace std;

int main()
{
	ifstream fin("series.txt");
	if (!fin)
		return 1;
	int num[1000];
	for (int i = 0; i < 1000; ++i)
	{
		char digit;
		while (fin && fin >> digit && (digit < '0' || digit > '9'))
			;
		num[i] = static_cast<int>(digit - '0');
	}
	long long product = 0;
	for (int i = 0; i < 1000 - LENGTH; ++i)
	{
		long long n_product = 1;
		for (int j = i; j < i + LENGTH; ++j)
			n_product *= num[j];
		if (n_product > product)
			product = n_product;
	}
	cout << product << "\n";

	return 0;
}