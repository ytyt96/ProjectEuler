#include <iostream>
#include <fstream>

using namespace std;

int max(const int& lhs, const int& rhs)
{
	return (lhs > rhs ? lhs : rhs);
}

int main()
{
	ifstream fin("grid.txt");
	if (!fin)
		return 1;
	int grid[20][20];
	for (int j = 0; j != 20; ++j)
		for (int i = 0; i != 20; ++i)
			fin >> grid[i][j];
	int product = 0;
	for (int j = 0; j != 20; ++j)
		for (int i = 0; i != 20; ++i)
		{
		if ((i >= 3) && (j + 3 < 20))
			product = max(product, grid[i][j] * grid[i - 1][j + 1] * grid[i - 2][j + 2] * grid[i - 3][j + 3]);
		if (j + 3 < 20)
			product = max(product, grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3]);
		if ((i + 3 < 20) && (j + 3 < 20))
			product = max(product, grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3]);
		if (i + 3 < 20)
			product = max(product, grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j]);
		}
	cout << product << "\n";
	return 0;
}