#include <iostream>
using std::cout;

int main()
{
	long long sum = 0, square = 0;
	for (int i = 1; i <= 100; ++i)
		sum += i*i, square += i;
	cout << square*square - sum;
	return 0;
}