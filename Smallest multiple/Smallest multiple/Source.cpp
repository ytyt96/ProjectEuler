using namespace std;
#include <iostream>

int main()
{
	for (int i = 20;/*NULL*/; i += 20)
	{
		bool ok = true;
		for (int j = 1; j <= 20; ++j)
			if (i % j != 0 || i%j % 2 != 0)
			{
				ok = false;
				break;
			}
		if (ok)
		{
			cout << i << "\n";
			return 0;
		}
	}
	return 0;
}