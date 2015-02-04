using namespace std;
#include <iostream>
#include <vector>

bool isPrime(const long long& val)
{
	for (long long i = 2; i <= trunc(sqrt(val)); ++i)
		if (val%i == 0)
			return false;
	return true;
}

int main()
{
	long long val= 600851475143;
	vector<long long> factors;
	while (!isPrime(val))
	{
		for (int i = 2; i <= val / 2;++i)
			if (val%i == 0)
			{
				factors.push_back(i);
				val /= i;
			}

	}
	factors.push_back(val);
	long long ans = 0;
	for (const auto& it : factors)
		if (isPrime(it) && it > ans)
			ans = it;
	cout << ans << "\n";
	return 0;
}