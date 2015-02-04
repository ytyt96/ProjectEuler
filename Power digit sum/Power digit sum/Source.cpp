#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> product(10000, 0);
	product[0] = 1;
	int n;
	cin >> n;
	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != 10000 - 1; ++j)
			product[j] *= 2;
		for (int j = 0; j != 10000 - 1; ++j)
		{
			product[j + 1] = product[j + 1] + product[j] / 10;
			product[j] %= 10;
		}
	}
	int sum = 0;
	for (int i = 0; i != 10000; ++i)
		sum += product[i];
	cout << sum << "\n";
	return 0;
}