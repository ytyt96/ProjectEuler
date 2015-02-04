#include <iostream>
#include <vector>
#define MAXIMUM 1000000

using namespace std;

int main()
{
	vector<int> number(MAXIMUM + 1, 0);
	int max = 0, max_val = 0;
	for (int i = 1; i <= MAXIMUM; ++i)
	{
		long long curr = i;
		int chain = 1;
		while (curr != 1)
		{
			if (curr % 2 == 0)
				curr /= 2;
			else
				curr = curr * 3 + 1;
			if (curr <= MAXIMUM && number[static_cast<int>(curr)] != 0)
			{
				chain += number[static_cast<int>(curr)];
				curr = 1;
			}
			else
				++chain;
		}
		number[i] = chain;
		if (chain > max_val)
		{
			max = i;
			max_val = chain;
		}
			
	}
	cout << max << "\n";
	return 0;
}