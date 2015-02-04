#define MAXIMUM 2000000

#include <iostream>

using std::cout;

bool isPrime(const long long& val)
{
	for (int i = 2; i <= sqrt(val); ++i)
		if (val % i == 0)
			return false;
	return true;
}

int main()
{
	long long num = 3, sum = 2;
	while (num < MAXIMUM)
	{
		if (isPrime(num))
			sum += num;
		num += 2;
	}
	cout << sum << "\n";
	return 0;
}