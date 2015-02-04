#include <iostream>

using namespace std;

int main()
{
	long long grid[22][22];
	for (int i = 0; i != 22; ++i)
		for (int j = 0; j != 22; ++j)
			grid[i][j] = 0;
	grid[1][1] = 1;
	for (int j = 1; j != 22; ++j)
		for (int i = 1; i != 22; ++i)
		{
			if (i == 1 && j == 1)
				continue;
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	cout << grid[21][21] << "\n";
	return 0;
}