#include <iostream>
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
	int num[10000];
	for (int i = 1; i != 10000; ++i)
		num[i] = d(i);
	int sum = 0;
	for (int i = 1; i != 10000; ++i)
		if (num[i]<10000 && num[i] > i && num[num[i]] == i)
			sum = sum + i + num[i];
	cout << sum << "\n";
	return 0;
}