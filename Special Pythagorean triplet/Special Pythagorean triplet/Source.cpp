#include <iostream>
using std::cout;

int main()
{
	for (int i = 0; i < 999; ++i)
		for (int j = i + 1; j < 1000; ++j)
			for (int k = j + 1; k <= 1000; ++k)
				if (i + j + k > 1000)
					break;
				else
				{
					if (i + j + k != 1000)
						continue;
					else
						if ((i*i + j*j) == (k*k))
						{
							cout << i*j*k << "\n";
							return 0;
						}
				}		
	return 0;
}