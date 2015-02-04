#include <iostream>
#include <vector>
#define MAXVAL 28123

using namespace std;

int d(int n)
{
	int ret = 0;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n / i*i == n)
		{
			if (i*i == n)
				ret += i;
			else
				ret = ret + i + n / i;
		}
	}
	return ++ret;
}

int main()
{
	vector<bool> isAbundant(MAXVAL + 1, false);
	vector<int> abundant;
	for (int i = 1; i <= MAXVAL; ++i)
		if (d(i) > i)
		{
			isAbundant[i] = true;
			abundant.push_back(i);
		}
			
	int sum = 0;
	for (int i = 1; i <= MAXVAL; ++i)
	{
		bool can = false;
		for (const auto& it : abundant)
		{
			if (it > i)
				break;
			if (isAbundant[i - it])
			{
				can = true;
				break;
			}
		}
		if (!can)
			sum += i;
	}
	cout << sum << "\n";
	return 0;
}