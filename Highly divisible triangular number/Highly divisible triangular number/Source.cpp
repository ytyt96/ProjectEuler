#include <iostream>

using std::cout;

int cnt_factors(int val)
{
	int ret = 0;
	for (int i = 1; i < sqrt(val); ++i)
		if (val%i == 0)
			ret += 2;
	if (sqrt(val) == trunc(sqrt(val)))
		++ret;
	return ret;
}

int main()
{
	int n = 0, val = 0;
	do
	{
		++n;
		val += n;
	} while (cnt_factors(val) <= 500);
	cout << val << "\n";
	return 0;
}