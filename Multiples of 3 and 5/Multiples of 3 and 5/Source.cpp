using namespace std;

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 0; i <  1000; ++i)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	cout << sum << "\n";
	return 0;
}