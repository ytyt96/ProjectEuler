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
	int cnt = 0, num = 1;
	while (cnt < 10001)
	{
		num += 1;
		if (isPrime(num))
			++cnt;
	}
	cout << num << "\n";
	return 0;
}