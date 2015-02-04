using namespace std;
#include <iostream>
#include <vector>

int main()
{
	int ans = 0;
	for (int i = 999; i >= 100; --i)
		for (int j = 999; j >= 100; --j)
		{
			int product = i*j;
			if (product < ans)
				continue;
			vector<int> digits;
			while (product > 0)
			{
				digits.push_back(product % 10);
				product /= 10;
			}

			bool palindrome = true;
			for (int k = 0; k < digits.size() / 2; ++k)
				if (digits[k] != digits[digits.size() - k - 1])
				{
					palindrome = false;
					break;
				}
			if (palindrome)
			{
				ans = i*j;
			}
		}
	cout << ans << "\n";
	return 0;
}